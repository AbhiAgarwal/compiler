# -*-Makefile-*- for HACS Gentle Introduction Example.

## SETUP.
##
#JAVA = java
#JAVAC = javac
#JAR = jar
#WGET = wget
#UNZIP = unzip -q
#CC = gcc -std=c99 -g
#FLEX = flex

# HACS configuration.
HACS = $(abspath hacs)
include $(HACS)/Makefile-hx

# Sample target.
pr1-student.run: pr1-student.hx
