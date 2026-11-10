CXX = g++						           # The C++ compiler command
CXXFLAGS = -std=c++17 -Wall	 	 # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						           # The linker options (if any)

# The all target builds all of the programs handled by the makefile.
all: P59875_top_to_bottom

P59875_top_to_bottom: P59875_top_to_bottom.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# P59875_top_to_bottom.o: P59875_top_to_bottom.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f *.o P59875_top_to_bottom doc
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
