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
include Apps/Tuto/CMakeFiles/tuto_histo.dir/depend.make

# Include the progress variables for this target.
include Apps/Tuto/CMakeFiles/tuto_histo.dir/progress.make

# Include the compile flags for this target's objects.
include Apps/Tuto/CMakeFiles/tuto_histo.dir/flags.make

Apps/Tuto/moc_tuto_histo.cxx: ../Apps/Tuto/tuto_histo.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_tuto_histo.cxx"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/moc_tuto_histo.cxx_parameters

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o: Apps/Tuto/CMakeFiles/tuto_histo.dir/flags.make
Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o: ../Apps/Tuto/tuto_histo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/tuto_histo.cpp

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tuto_histo.dir/tuto_histo.cpp.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/tuto_histo.cpp > CMakeFiles/tuto_histo.dir/tuto_histo.cpp.i

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tuto_histo.dir/tuto_histo.cpp.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto/tuto_histo.cpp -o CMakeFiles/tuto_histo.dir/tuto_histo.cpp.s

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.requires:
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.requires

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.provides: Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.requires
	$(MAKE) -f Apps/Tuto/CMakeFiles/tuto_histo.dir/build.make Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.provides.build
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.provides

Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.provides.build: Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o: Apps/Tuto/CMakeFiles/tuto_histo.dir/flags.make
Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o: Apps/Tuto/moc_tuto_histo.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o -c /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/moc_tuto_histo.cxx

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.i"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/moc_tuto_histo.cxx > CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.i

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.s"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/moc_tuto_histo.cxx -o CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.s

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.requires:
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.requires

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.provides: Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.requires
	$(MAKE) -f Apps/Tuto/CMakeFiles/tuto_histo.dir/build.make Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.provides.build
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.provides

Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.provides.build: Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o

# Object files for target tuto_histo
tuto_histo_OBJECTS = \
"CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o" \
"CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o"

# External object files for target tuto_histo
tuto_histo_EXTERNAL_OBJECTS =

../bin/Release/tuto_histo: Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o
../bin/Release/tuto_histo: Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o
../bin/Release/tuto_histo: Apps/Tuto/CMakeFiles/tuto_histo.dir/build.make
../bin/Release/tuto_histo: ../lib/Release/libalgo.a
../bin/Release/tuto_histo: ../lib/Release/libtopology.a
../bin/Release/tuto_histo: ../lib/Release/libcontainer.a
../bin/Release/tuto_histo: ../lib/Release/libutils.a
../bin/Release/tuto_histo: /usr/lib/libQGLViewer.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libQtGui.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libQtXml.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libQtCore.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libGL.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libSM.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libICE.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libX11.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libXext.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libGLEW.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libz.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libxml2.so
../bin/Release/tuto_histo: /usr/lib/x86_64-linux-gnu/libboost_regex.so
../bin/Release/tuto_histo: Apps/Tuto/CMakeFiles/tuto_histo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/Release/tuto_histo"
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tuto_histo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Apps/Tuto/CMakeFiles/tuto_histo.dir/build: ../bin/Release/tuto_histo
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/build

Apps/Tuto/CMakeFiles/tuto_histo.dir/requires: Apps/Tuto/CMakeFiles/tuto_histo.dir/tuto_histo.cpp.o.requires
Apps/Tuto/CMakeFiles/tuto_histo.dir/requires: Apps/Tuto/CMakeFiles/tuto_histo.dir/moc_tuto_histo.cxx.o.requires
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/requires

Apps/Tuto/CMakeFiles/tuto_histo.dir/clean:
	cd /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto && $(CMAKE_COMMAND) -P CMakeFiles/tuto_histo.dir/cmake_clean.cmake
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/clean

Apps/Tuto/CMakeFiles/tuto_histo.dir/depend: Apps/Tuto/moc_tuto_histo.cxx
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/Apps/Tuto /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto /home/gpeiffert/Desktop/CGoGN-master/build/Apps/Tuto/CMakeFiles/tuto_histo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Apps/Tuto/CMakeFiles/tuto_histo.dir/depend
