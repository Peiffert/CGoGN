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
include Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/depend.make

# Include the progress variables for this target.
include Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/flags.make

Apps/Tuto/Attributes/ui_vbo_attribs.h: ../Apps/Tuto/Attributes/vbo_attribs.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_vbo_attribs.h"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/ui_vbo_attribs.h /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Attributes/vbo_attribs.ui

Apps/Tuto/Attributes/moc_vbo_attribs.cxx: ../Apps/Tuto/Attributes/vbo_attribs.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_vbo_attribs.cxx"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/moc_vbo_attribs.cxx_parameters

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/flags.make
Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o: ../Apps/Tuto/Attributes/vbo_attribs.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Attributes/vbo_attribs.cpp

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Attributes/vbo_attribs.cpp > CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.i

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Attributes/vbo_attribs.cpp -o CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.s

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.requires:
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.requires

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.provides: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.requires
	$(MAKE) -f Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/build.make Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.provides.build
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.provides

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.provides.build: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/flags.make
Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o: Apps/Tuto/Attributes/moc_vbo_attribs.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/buildDebug/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o -c /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/moc_vbo_attribs.cxx

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/moc_vbo_attribs.cxx > CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.i

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/moc_vbo_attribs.cxx -o CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.s

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.requires:
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.requires

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.provides: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.requires
	$(MAKE) -f Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/build.make Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.provides.build
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.provides

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.provides.build: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o

# Object files for target vbo_attribs
vbo_attribs_OBJECTS = \
"CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o" \
"CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o"

# External object files for target vbo_attribs
vbo_attribs_EXTERNAL_OBJECTS =

../bin/Debug/vbo_attribs: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o
../bin/Debug/vbo_attribs: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o
../bin/Debug/vbo_attribs: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/build.make
../bin/Debug/vbo_attribs: ../lib/Debug/libalgo.a
../bin/Debug/vbo_attribs: ../lib/Debug/libtopology.a
../bin/Debug/vbo_attribs: ../lib/Debug/libcontainer.a
../bin/Debug/vbo_attribs: ../lib/Debug/libutils.a
../bin/Debug/vbo_attribs: /usr/lib/libQGLViewer.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Debug/vbo_attribs: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Debug/vbo_attribs: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../../bin/Debug/vbo_attribs"
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vbo_attribs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/build: ../bin/Debug/vbo_attribs
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/build

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/requires: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/vbo_attribs.cpp.o.requires
Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/requires: Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/moc_vbo_attribs.cxx.o.requires
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/requires

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes && $(CMAKE_COMMAND) -P CMakeFiles/vbo_attribs.dir/cmake_clean.cmake
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/clean

Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/depend: Apps/Tuto/Attributes/ui_vbo_attribs.h
Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/depend: Apps/Tuto/Attributes/moc_vbo_attribs.cxx
	cd /home/gpeiffert/Desktop/CGoGN-master/buildDebug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/Attributes /home/gpeiffert/Desktop/CGoGN-master/buildDebug /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes /home/gpeiffert/Desktop/CGoGN-master/buildDebug/Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tuto/Attributes/CMakeFiles/vbo_attribs.dir/depend
