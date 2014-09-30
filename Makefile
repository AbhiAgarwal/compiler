# Makefile for project #1 of compiler construction class
# CSCI-GA.2130-001 fall 2014
# http://cs.nyu.edu/courses/fall14/CSCI-GA.2130-001/pr1/pr1.pdf

## SETUP.
##
JAVA = java
JAVAC = javac
JAR = jar
WGET = wget
UNZIP = unzip -q
CC = gcc -std=c99 -g
FLEX = flex

# HACS configuration.
HACS = $(abspath hacs)
include $(HACS)/Makefile-hx

# Sample target.
pr1-student.run: pr1-student.hx
