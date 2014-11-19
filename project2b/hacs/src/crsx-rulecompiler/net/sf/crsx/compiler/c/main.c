// Copyright (c) 2013 IBM Corporation.
// $$Id: main.c,v 3.3 2014/02/07 20:18:10 villardl Exp $$

/**
 * CRSXC command line.
 *
 * Also serve as a generic loader
 */

#include <assert.h>
#include <alloca.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "linter.h"
#include "crsx.h"
#include "prof.h"

// Scanner definitions
extern int readTerm(Sink sink, FILE *input);
extern int scanTerm(Sink sink, const char* text);

static Term
readTermFromFile (Context context, char* name)
{
    FILE *fp = fopen(name, "r");
    if (!fp)
    {
        printf("Fatal: Cannot read file %s (%s)\n", name, strerror(errno));
        exit(3);
    }

    Sink buffer = MAKE_BUFFER(context);
    readTerm(buffer, fp);
    Term term = BUFFER_TERM(buffer);

    FREE_BUFFER(buffer);

    fclose(fp);
    return term;
}

static Term
readTermFromString(Context context, const char* text)
{
    Sink buffer = MAKE_BUFFER(context);
    scanTerm(buffer, text);
    Term term = BUFFER_TERM(buffer);
    FREE_BUFFER(buffer);
    return term;
}

static Term
normalizeTerm (Context context, Term term, const char* wrapper)
{
    assert (context && term);

    Sink sink = MAKE_BUFFER (context);
    assert (sink);

    Term redex = term;
    if (wrapper)
    {
        ConstructionDescriptor dtor = LOOKUP_DESCRIPTOR (context, wrapper);
        if (!dtor)
        {
            fprintf (stderr, "Internal: unknown wrapper: \"%s\"\n", wrapper);
            exit (2);
        }
        PROPERTIES_RESET (sink);
        sink->start(sink, dtor);
        COPY (sink, term);
        sink->end(sink, dtor);
        redex = BUFFER_TERM (sink);
    }
    assert (redex);

    Term result = COMPUTE (context, redex);
    return result;
}

/**
 * Print out command line usage/help
 */
static
int printUsage(char* errmsg)
{
    if (errmsg)
    {
        printf ("Fatal: %s\n", errmsg);
    }

#ifndef GENERIC_LOADER
    printf ("Usage: crsx <command> [<args>]\n\n");
    printf ("The commands are:\n");
    printf ("  compile <header|rules|sorts|symbols|opt1> <rules.dr>   Compile reified rules to c code.\n");
    printf ("  lint [-c] <input>                                      Check term lexical form.\n");
    printf ("  report <input.csv>                                         Analyzes profiling information and print report.\n");
    printf ("or:\n");
    printf ("  key=value...   Invoke raw rulecompiler with this environment setup.\n");
#else
    printf ("Usage: %s [key]... [key=value]...\n", getenv("execname"));
    printf ("Where key and key-value are any of\n");
    printf ("  term=TERM                        input term using term syntax.\n");
    printf ("  wrapper=WRAPPER                  a single construction wrapping the input term (if any)\n");
    printf ("  crsx-debug-steps                 print term before each step\n");
    printf ("  include-annotations              print various annotations (linear markers, nostep, etc...)\n");
    printf ("  free-var-annotation              enable free variable annotation\n");
    printf ("  omit-properties[=MAX]            omit properties when printing term, or up to MAX.\n");
#endif
    exit(1);
}

static
int run(void)
{
	Context context = (Context) calloc(1, sizeof(struct _Context));
	initCRSXContext(context);
	//context->fv_enabled = 0;
	Term term = NULL;
	// if input: read term from file
	char *infile = getenv("input");
	if (infile)
	{
		term = readTermFromFile (context, infile);
	}
	else
	{
		// if term: parse
		char *interm = getenv("term");
		if (interm)
		{
			term = readTermFromString(context, interm);
		}
	}
	if (!term)
        return printUsage("No input/term specified?");

    // eval: term -> term
    term = normalizeTerm(context, term, getenv("wrapper"));
    if (term == NULL)
    	return 1;

    // print: term -> output
    FILE *out = STDOUT;
    char *outfile = getenv("output");
    if (outfile)
    {
    	out = fopen(outfile, "w");
		if (!out)
			perror(outfile), exit(1);
    }
    fprintTermWithIndent (context, out, term);

    // Cleanup
    unlinkTerm(context, term);
    crsxReleasePools(context);
    
    return 0;
}

#ifndef GENERIC_LOADER

static
int runCompile(int argp, int argc, char* argv[])
{
    if (argc - argp < 2)
        return printUsage("Missing argument(s).");

    char* kind = argv[argp++];
    char* infile = argv[argp++];

    if (argc - argp > 0)
        return printUsage("Too many arguments.");

    char* wrapper = NULL;
    if (strcmp(kind, "header") == 0)
        wrapper = "ComputeHeader";
    else if (strcmp(kind, "rules") == 0)
        wrapper = "ComputeRules";
    else if (strcmp(kind, "sorts") == 0)
        wrapper = "ComputeSorts";
    else if (strcmp(kind, "symbols") == 0)
        wrapper = "ComputeSymbols";
    else if (strcmp(kind, "opt1") == 0)
            wrapper = "Optimize1";
    else
        return printUsage("Invalid compile mode.");

    setenv("input", infile, 1);
    setenv("wrapper", wrapper, 1);
    return run();
}

static
int runLinter(int argp, int argc, char* argv[])
{
    int flags = 0;
    char* input = (char*)0;

    int i;
    for (i = argp; i < argc; ++i)
    {
        const char *arg = argv[i];
        if (!strcmp("-c", arg))
            flags |= CHECK_CLOSED;
        else
        {
            if (input)
                return printUsage("Too many arguments.");
            input = (char*)arg;
        }
    }

    if (!input)
        return printUsage("Missing input argument.");


    Context context = (Context) calloc(1, sizeof(struct _Context));
    initCRSXContext(context);

    // Parse term
    Term term = readTermFromFile (context, input);

    // And lint..
    LinterReport report = lint(context, term, flags);

    if (!report->valid)
        printReport(context, report);

    FREE(context, report);

    return 0;
}


static
int runReport(int argp, int argc, char* argv[])
{
    char* input = (char*)0;

    int i;
    for (i = argp; i < argc; ++i)
    {
        const char *arg = argv[i];
        if (input)
            return printUsage("Too many arguments.");
        input = (char*)arg;
    }

    if (!input)
        return printUsage("Missing input argument.");


    Context context = (Context) calloc(1, sizeof(struct _Context));
    initCRSXContext(context);

    FILE *fp = fopen(input, "r");
    if (!fp)
    {
        printf("Fatal: Cannot read file %s (%s)\n", input, strerror(errno));
        exit(3);
    }

    crsxpMergeBacktrace(context, fp);

    fclose(fp);

    return 0;
}


#endif

static void
crsx_setenv(const char *key, char *value)
{
	if (setenv(key, value, 1) < 0)
		perror(key), exit (1);
	char *upcased = alloca(strlen(key)+1);
	char *p = upcased;
	char c;
	while ((c = *(key++)))
		*(p++) = (c == '-' ? '_' : toupper(c));
	*p = '\0';
	if (setenv(upcased, value, 1) < 0)
		perror(key), exit (1);
}

int
main (int argc, char* argv[])
{
    crsx_setenv("execname", argv[0]);

#ifndef GENERIC_LOADER
    if (argc <= 1)
        return printUsage(NULL);

    char* command = argv[1];

    if (strcmp(command, "compile") == 0)
        return runCompile(2, argc, argv);

    if (strcmp(command, "lint") == 0)
           return runLinter(2, argc, argv);

    if (strcmp(command, "report") == 0)
           return runReport(2, argc, argv);

#endif
    // "manual" loading.
    int i;
    for (i = 0; i < argc; ++i)
    {
    	const char *arg = argv[i];
    	char *eq = strchr(arg, '=');
    	if (eq)
    	{
    		size_t keyz = eq - arg;
    		char *key = memcpy(alloca(keyz + 1), arg, keyz);
    		key[keyz] = '\0';
    		crsx_setenv(key, eq+1);
    	}
    	else
    	{
    		crsx_setenv(arg, "");
    	}
    }
    return run();
}
