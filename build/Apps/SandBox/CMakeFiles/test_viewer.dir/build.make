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
include Apps/SandBox/CMakeFiles/test_viewer.dir/depend.make

# Include the progress variables for this target.
include Apps/SandBox/CMakeFiles/test_viewer.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/SandBox/CMakeFiles/test_viewer.dir/flags.make

Apps/SandBox/moc_test_viewer.cxx: ../Apps/SandBox/test_viewer.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_test_viewer.cxx"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/moc_test_viewer.cxx_parameters

Apps/SandBox/ui_test_viewer.h: ../Apps/SandBox/test_viewer.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_test_viewer.h"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/ui_test_viewer.h /home/gpeiffert/Desktop/CGoGN-master/Apps/SandBox/test_viewer.ui

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o: Apps/SandBox/CMakeFiles/test_viewer.dir/flags.make
Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o: ../Apps/SandBox/test_viewer.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_viewer.dir/test_viewer.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/SandBox/test_viewer.cpp

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_viewer.dir/test_viewer.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/SandBox/test_viewer.cpp > CMakeFiles/test_viewer.dir/test_viewer.cpp.i

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_viewer.dir/test_viewer.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/SandBox/test_viewer.cpp -o CMakeFiles/test_viewer.dir/test_viewer.cpp.s

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.requires:
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.requires

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.provides: Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.requires
	$(MAKE) -f Apps/SandBox/CMakeFiles/test_viewer.dir/build.make Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.provides.build
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.provides

Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.provides.build: Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o: Apps/SandBox/CMakeFiles/test_viewer.dir/flags.make
Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o: Apps/SandBox/moc_test_viewer.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o -c /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/moc_test_viewer.cxx

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/moc_test_viewer.cxx > CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.i

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/moc_test_viewer.cxx -o CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.s

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.requires:
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.requires

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.provides: Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.requires
	$(MAKE) -f Apps/SandBox/CMakeFiles/test_viewer.dir/build.make Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.provides.build
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.provides

Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.provides.build: Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o

# Object files for target test_viewer
test_viewer_OBJECTS = \
"CMakeFiles/test_viewer.dir/test_viewer.cpp.o" \
"CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o"

# External object files for target test_viewer
test_viewer_EXTERNAL_OBJECTS =

../bin/Release/test_viewer: Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o
../bin/Release/test_viewer: Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o
../bin/Release/test_viewer: Apps/SandBox/CMakeFiles/test_viewer.dir/build.make
../bin/Release/test_viewer: ../lib/Release/libalgo.a
../bin/Release/test_viewer: ../lib/Release/libtopology.a
../bin/Release/test_viewer: ../lib/Release/libcontainer.a
../bin/Release/test_viewer: ../lib/Release/libutils.a
../bin/Release/test_viewer: /usr/lib/libQGLViewer.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Release/test_viewer: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Release/test_viewer: Apps/SandBox/CMakeFiles/test_viewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Release/test_viewer"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_viewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/SandBox/CMakeFiles/test_viewer.dir/build: ../bin/Release/test_viewer
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/build

Apps/SandBox/CMakeFiles/test_viewer.dir/requires: Apps/SandBox/CMakeFiles/test_viewer.dir/test_viewer.cpp.o.requires
Apps/SandBox/CMakeFiles/test_viewer.dir/requires: Apps/SandBox/CMakeFiles/test_viewer.dir/moc_test_viewer.cxx.o.requires
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/requires

Apps/SandBox/CMakeFiles/test_viewer.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox && $(CMAKE_COMMAND) -P CMakeFiles/test_viewer.dir/cmake_clean.cmake
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/clean

Apps/SandBox/CMakeFiles/test_viewer.dir/depend: Apps/SandBox/moc_test_viewer.cxx
Apps/SandBox/CMakeFiles/test_viewer.dir/depend: Apps/SandBox/ui_test_viewer.h
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/SandBox /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox /home/gpeiffert/Desktop/CGoGN-master/build/Apps/SandBox/CMakeFiles/test_viewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/SandBox/CMakeFiles/test_viewer.dir/depend

