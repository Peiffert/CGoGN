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
include Apps/Benches/CMakeFiles/bench_remesh.dir/depend.make

# Include the progress variables for this target.
include Apps/Benches/CMakeFiles/bench_remesh.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Benches/CMakeFiles/bench_remesh.dir/flags.make

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o: Apps/Benches/CMakeFiles/bench_remesh.dir/flags.make
Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o: ../Apps/Benches/bench_remesh.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Benches/bench_remesh.cpp

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bench_remesh.dir/bench_remesh.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Benches/bench_remesh.cpp > CMakeFiles/bench_remesh.dir/bench_remesh.cpp.i

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bench_remesh.dir/bench_remesh.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Benches/bench_remesh.cpp -o CMakeFiles/bench_remesh.dir/bench_remesh.cpp.s

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.requires:
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.requires

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.provides: Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.requires
	$(MAKE) -f Apps/Benches/CMakeFiles/bench_remesh.dir/build.make Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.provides.build
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.provides

Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.provides.build: Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o

# Object files for target bench_remesh
bench_remesh_OBJECTS = \
"CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o"

# External object files for target bench_remesh
bench_remesh_EXTERNAL_OBJECTS =

../bin/Release/bench_remesh: Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o
../bin/Release/bench_remesh: Apps/Benches/CMakeFiles/bench_remesh.dir/build.make
../bin/Release/bench_remesh: ../lib/Release/libalgo.a
../bin/Release/bench_remesh: ../lib/Release/libtopology.a
../bin/Release/bench_remesh: ../lib/Release/libcontainer.a
../bin/Release/bench_remesh: ../lib/Release/libutils.a
../bin/Release/bench_remesh: /usr/lib/libQGLViewer.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Release/bench_remesh: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Release/bench_remesh: Apps/Benches/CMakeFiles/bench_remesh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Release/bench_remesh"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bench_remesh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Benches/CMakeFiles/bench_remesh.dir/build: ../bin/Release/bench_remesh
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/build

Apps/Benches/CMakeFiles/bench_remesh.dir/requires: Apps/Benches/CMakeFiles/bench_remesh.dir/bench_remesh.cpp.o.requires
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/requires

Apps/Benches/CMakeFiles/bench_remesh.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches && $(CMAKE_COMMAND) -P CMakeFiles/bench_remesh.dir/cmake_clean.cmake
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/clean

Apps/Benches/CMakeFiles/bench_remesh.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Benches /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Benches/CMakeFiles/bench_remesh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Benches/CMakeFiles/bench_remesh.dir/depend

