CXX = g++						           # The C++ compiler command
CXXFLAGS = -std=c++17 -Wall	 	 # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						           # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: P97156_nums_in_a_interval

P97156_nums_in_a_interval: P97156_nums_in_a_interval.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# P97156_nums_in_a_interval.o: P97156_nums_in_a_interval.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o P97156_nums_in_a_interval doc
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
