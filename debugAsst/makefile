#
# makefile for discreteWordCount program
#
########################################################################
# Macro definitions for "standard" C and C++ compilations
#
#  Define special compilation flags for C++ compilation. These may change when
#  we're done testing and debugging.
CPPFLAGS=-g
#
# 
#  Define special linkage flags.  Usually, these are used to include
#  special libraries of code, e.g., -lm to add the library of mathematical
#  routines such as sqrt, sin, cos, etc.
LFLAGS=-lm

# Compilation command pattern: how to produce .o files from a .cpp file
.cpp.o: ; g++ $(CPPFLAGS) -MMD -c $*.cpp

CC=gcc
CPP=g++




#
# The first target is the default: what to build if you just say "make"
#
discreteWordCount: discreteWordCount.o
	g++ $(CPPFLAGS) -o discreteWordCount discreteWordCount.o $(LFLAGS)

#
# Other files to build
#

#
# Build discreteWordCount.o from discreteWordCount.cpp 
# Because we don't give a rule here for how to do this, the default rule
# for producing .o files from .cpp files, defined above, will be used.
discreteWordCount.o: discreteWordCount.cpp



#
# A dummy target: "make clean" will remove all files that "make" produces.
#
clean:
	-/bin/rm discreteWordCount discreteWordCount.o


#
# That's all. (It's not a very complicated project.)
#
