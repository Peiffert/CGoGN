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
include Apps/Examples/CMakeFiles/concave_rendering.dir/depend.make

# Include the progress variables for this target.
include Apps/Examples/CMakeFiles/concave_rendering.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Examples/CMakeFiles/concave_rendering.dir/flags.make

Apps/Examples/moc_concave_rendering.cxx: ../Apps/Examples/concave_rendering.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_concave_rendering.cxx"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples/moc_concave_rendering.cxx_parameters

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o: Apps/Examples/CMakeFiles/concave_rendering.dir/flags.make
Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o: ../Apps/Examples/concave_rendering.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Examples/concave_rendering.cpp

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concave_rendering.dir/concave_rendering.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Examples/concave_rendering.cpp > CMakeFiles/concave_rendering.dir/concave_rendering.cpp.i

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concave_rendering.dir/concave_rendering.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Examples/concave_rendering.cpp -o CMakeFiles/concave_rendering.dir/concave_rendering.cpp.s

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.requires:
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.requires

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.provides: Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.requires
	$(MAKE) -f Apps/Examples/CMakeFiles/concave_rendering.dir/build.make Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.provides.build
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.provides

Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.provides.build: Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o: Apps/Examples/CMakeFiles/concave_rendering.dir/flags.make
Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o: Apps/Examples/moc_concave_rendering.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o -c /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples/moc_concave_rendering.cxx

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples/moc_concave_rendering.cxx > CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.i

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples/moc_concave_rendering.cxx -o CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.s

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.requires:
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.requires

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.provides: Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.requires
	$(MAKE) -f Apps/Examples/CMakeFiles/concave_rendering.dir/build.make Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.provides.build
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.provides

Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.provides.build: Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o

# Object files for target concave_rendering
concave_rendering_OBJECTS = \
"CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o" \
"CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o"

# External object files for target concave_rendering
concave_rendering_EXTERNAL_OBJECTS =

../bin/Debug/concave_rendering: Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o
../bin/Debug/concave_rendering: Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o
../bin/Debug/concave_rendering: Apps/Examples/CMakeFiles/concave_rendering.dir/build.make
../bin/Debug/concave_rendering: ../lib/Debug/libalgo.a
../bin/Debug/concave_rendering: ../lib/Debug/libtopology.a
../bin/Debug/concave_rendering: ../lib/Debug/libcontainer.a
../bin/Debug/concave_rendering: ../lib/Debug/libutils.a
../bin/Debug/concave_rendering: /usr/lib/libQGLViewer.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Debug/concave_rendering: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Debug/concave_rendering: Apps/Examples/CMakeFiles/concave_rendering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Debug/concave_rendering"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/concave_rendering.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Examples/CMakeFiles/concave_rendering.dir/build: ../bin/Debug/concave_rendering
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/build

Apps/Examples/CMakeFiles/concave_rendering.dir/requires: Apps/Examples/CMakeFiles/concave_rendering.dir/concave_rendering.cpp.o.requires
Apps/Examples/CMakeFiles/concave_rendering.dir/requires: Apps/Examples/CMakeFiles/concave_rendering.dir/moc_concave_rendering.cxx.o.requires
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/requires

Apps/Examples/CMakeFiles/concave_rendering.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples && $(CMAKE_COMMAND) -P CMakeFiles/concave_rendering.dir/cmake_clean.cmake
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/clean

Apps/Examples/CMakeFiles/concave_rendering.dir/depend: Apps/Examples/moc_concave_rendering.cxx
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Examples /home/gpeiffert/Desktop/CGoGN-master/buildDebug /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Examples/CMakeFiles/concave_rendering.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Examples/CMakeFiles/concave_rendering.dir/depend

