# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gpeiffert/Desktop/CGoGN-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gpeiffert/Desktop/CGoGN-master/build

# Include any dependencies generated for this target.
include Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/depend.make

# Include the progress variables for this target.
include Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/flags.make

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/flags.make
Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o: ../Apps/Tuto/Traversals/traverse_neighbours.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Traversals/traverse_neighbours.cpp

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Traversals/traverse_neighbours.cpp > CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.i

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Traversals/traverse_neighbours.cpp -o CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.s

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.requires:
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.requires

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.provides: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.requires
	$(MAKE) -f Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/build.make Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.provides.build
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.provides

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.provides.build: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o

# Object files for target traverse_neighbours
traverse_neighbours_OBJECTS = \
"CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o"

# External object files for target traverse_neighbours
traverse_neighbours_EXTERNAL_OBJECTS =

../bin/Release/traverse_neighbours: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o
../bin/Release/traverse_neighbours: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/build.make
../bin/Release/traverse_neighbours: ../lib/Release/libalgo.a
../bin/Release/traverse_neighbours: ../lib/Release/libtopology.a
../bin/Release/traverse_neighbours: ../lib/Release/libcontainer.a
../bin/Release/traverse_neighbours: ../lib/Release/libutils.a
../bin/Release/traverse_neighbours: /usr/lib/libQGLViewer.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Release/traverse_neighbours: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Release/traverse_neighbours: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../../bin/Release/traverse_neighbours"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/traverse_neighbours.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/build: ../bin/Release/traverse_neighbours
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/build

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/requires: Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/traverse_neighbours.cpp.o.requires
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/requires

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals && $(CMAKE_COMMAND) -P CMakeFiles/traverse_neighbours.dir/cmake_clean.cmake
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/clean

Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Traversals /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tuto/Traversals/CMakeFiles/traverse_neighbours.dir/depend
