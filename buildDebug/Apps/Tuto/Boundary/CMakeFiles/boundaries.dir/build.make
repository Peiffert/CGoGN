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
include Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/depend.make

# Include the progress variables for this target.
include Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/flags.make

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/flags.make
Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o: ../Apps/Tuto/Boundary/boundaries.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/boundaries.dir/boundaries.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Boundary/boundaries.cpp

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boundaries.dir/boundaries.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Boundary/boundaries.cpp > CMakeFiles/boundaries.dir/boundaries.cpp.i

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boundaries.dir/boundaries.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Boundary/boundaries.cpp -o CMakeFiles/boundaries.dir/boundaries.cpp.s

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.requires:
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.requires

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.provides: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.requires
	$(MAKE) -f Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/build.make Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.provides.build
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.provides

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.provides.build: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o

# Object files for target boundaries
boundaries_OBJECTS = \
"CMakeFiles/boundaries.dir/boundaries.cpp.o"

# External object files for target boundaries
boundaries_EXTERNAL_OBJECTS =

../bin/Debug/boundaries: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o
../bin/Debug/boundaries: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/build.make
../bin/Debug/boundaries: ../lib/Debug/libalgo.a
../bin/Debug/boundaries: ../lib/Debug/libtopology.a
../bin/Debug/boundaries: ../lib/Debug/libcontainer.a
../bin/Debug/boundaries: ../lib/Debug/libutils.a
../bin/Debug/boundaries: /usr/lib/libQGLViewer.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Debug/boundaries: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Debug/boundaries: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../../bin/Debug/boundaries"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boundaries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/build: ../bin/Debug/boundaries
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/build

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/requires: Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/boundaries.cpp.o.requires
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/requires

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary && $(CMAKE_COMMAND) -P CMakeFiles/boundaries.dir/cmake_clean.cmake
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/clean

Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Boundary /home/gpeiffert/Desktop/CGoGN-master/buildDebug /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tuto/Boundary/CMakeFiles/boundaries.dir/depend
