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
include Apps/Tests/CMakeFiles/copyfrom.dir/depend.make

# Include the progress variables for this target.
include Apps/Tests/CMakeFiles/copyfrom.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tests/CMakeFiles/copyfrom.dir/flags.make

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o: Apps/Tests/CMakeFiles/copyfrom.dir/flags.make
Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o: ../Apps/Tests/copyfrom.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/copyfrom.dir/copyfrom.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/copyfrom.cpp

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/copyfrom.dir/copyfrom.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/copyfrom.cpp > CMakeFiles/copyfrom.dir/copyfrom.cpp.i

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/copyfrom.dir/copyfrom.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/copyfrom.cpp -o CMakeFiles/copyfrom.dir/copyfrom.cpp.s

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.requires:
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.requires

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.provides: Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.requires
	$(MAKE) -f Apps/Tests/CMakeFiles/copyfrom.dir/build.make Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.provides.build
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.provides

Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.provides.build: Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o

# Object files for target copyfrom
copyfrom_OBJECTS = \
"CMakeFiles/copyfrom.dir/copyfrom.cpp.o"

# External object files for target copyfrom
copyfrom_EXTERNAL_OBJECTS =

../bin/Release/copyfrom: Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o
../bin/Release/copyfrom: Apps/Tests/CMakeFiles/copyfrom.dir/build.make
../bin/Release/copyfrom: ../lib/Release/libalgo.a
../bin/Release/copyfrom: ../lib/Release/libtopology.a
../bin/Release/copyfrom: ../lib/Release/libcontainer.a
../bin/Release/copyfrom: ../lib/Release/libutils.a
../bin/Release/copyfrom: /usr/lib/libQGLViewer.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Release/copyfrom: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Release/copyfrom: Apps/Tests/CMakeFiles/copyfrom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Release/copyfrom"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/copyfrom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tests/CMakeFiles/copyfrom.dir/build: ../bin/Release/copyfrom
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/build

Apps/Tests/CMakeFiles/copyfrom.dir/requires: Apps/Tests/CMakeFiles/copyfrom.dir/copyfrom.cpp.o.requires
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/requires

Apps/Tests/CMakeFiles/copyfrom.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests && $(CMAKE_COMMAND) -P CMakeFiles/copyfrom.dir/cmake_clean.cmake
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/clean

Apps/Tests/CMakeFiles/copyfrom.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tests/CMakeFiles/copyfrom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tests/CMakeFiles/copyfrom.dir/depend
