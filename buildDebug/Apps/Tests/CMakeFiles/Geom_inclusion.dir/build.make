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
CMAKE_BINARY_DIR = /home/gpeiffert/Desktop/CGoGN-master/buildDebug

# Include any dependencies generated for this target.
include Apps/Tests/CMakeFiles/Geom_inclusion.dir/depend.make

# Include the progress variables for this target.
include Apps/Tests/CMakeFiles/Geom_inclusion.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tests/CMakeFiles/Geom_inclusion.dir/flags.make

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o: Apps/Tests/CMakeFiles/Geom_inclusion.dir/flags.make
Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o: ../Apps/Tests/Geom_inclusion.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/Geom_inclusion.cpp

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/Geom_inclusion.cpp > CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.i

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests/Geom_inclusion.cpp -o CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.s

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.requires:
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.requires

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.provides: Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.requires
	$(MAKE) -f Apps/Tests/CMakeFiles/Geom_inclusion.dir/build.make Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.provides.build
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.provides

Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.provides.build: Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o

# Object files for target Geom_inclusion
Geom_inclusion_OBJECTS = \
"CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o"

# External object files for target Geom_inclusion
Geom_inclusion_EXTERNAL_OBJECTS =

../bin/Debug/Geom_inclusion: Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o
../bin/Debug/Geom_inclusion: Apps/Tests/CMakeFiles/Geom_inclusion.dir/build.make
../bin/Debug/Geom_inclusion: ../lib/Debug/libalgo.a
../bin/Debug/Geom_inclusion: ../lib/Debug/libtopology.a
../bin/Debug/Geom_inclusion: ../lib/Debug/libcontainer.a
../bin/Debug/Geom_inclusion: ../lib/Debug/libutils.a
../bin/Debug/Geom_inclusion: /usr/lib/libQGLViewer.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Debug/Geom_inclusion: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Debug/Geom_inclusion: Apps/Tests/CMakeFiles/Geom_inclusion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Debug/Geom_inclusion"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Geom_inclusion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tests/CMakeFiles/Geom_inclusion.dir/build: ../bin/Debug/Geom_inclusion
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/build

Apps/Tests/CMakeFiles/Geom_inclusion.dir/requires: Apps/Tests/CMakeFiles/Geom_inclusion.dir/Geom_inclusion.cpp.o.requires
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/requires

Apps/Tests/CMakeFiles/Geom_inclusion.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests && $(CMAKE_COMMAND) -P CMakeFiles/Geom_inclusion.dir/cmake_clean.cmake
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/clean

Apps/Tests/CMakeFiles/Geom_inclusion.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tests /home/gpeiffert/Desktop/CGoGN-master/buildDebug /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tests/CMakeFiles/Geom_inclusion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tests/CMakeFiles/Geom_inclusion.dir/depend

