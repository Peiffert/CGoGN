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
include CMakeFiles/container.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/container.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/container.dir/flags.make

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o: ../src/Container/attributeContainer.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/src/Container/attributeContainer.cpp

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/container.dir/src/Container/attributeContainer.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/src/Container/attributeContainer.cpp > CMakeFiles/container.dir/src/Container/attributeContainer.cpp.i

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/container.dir/src/Container/attributeContainer.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/src/Container/attributeContainer.cpp -o CMakeFiles/container.dir/src/Container/attributeContainer.cpp.s

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.requires:
.PHONY : CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.requires

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.provides: CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.requires
	$(MAKE) -f CMakeFiles/container.dir/build.make CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.provides.build
.PHONY : CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.provides

CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.provides.build: CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o

CMakeFiles/container.dir/src/Container/holeblockref.cpp.o: CMakeFiles/container.dir/flags.make
CMakeFiles/container.dir/src/Container/holeblockref.cpp.o: ../src/Container/holeblockref.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/container.dir/src/Container/holeblockref.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/container.dir/src/Container/holeblockref.cpp.o -c /home/gpeiffert/Desktop/CGoGN-master/src/Container/holeblockref.cpp

CMakeFiles/container.dir/src/Container/holeblockref.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/container.dir/src/Container/holeblockref.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpeiffert/Desktop/CGoGN-master/src/Container/holeblockref.cpp > CMakeFiles/container.dir/src/Container/holeblockref.cpp.i

CMakeFiles/container.dir/src/Container/holeblockref.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/container.dir/src/Container/holeblockref.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpeiffert/Desktop/CGoGN-master/src/Container/holeblockref.cpp -o CMakeFiles/container.dir/src/Container/holeblockref.cpp.s

CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.requires:
.PHONY : CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.requires

CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.provides: CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.requires
	$(MAKE) -f CMakeFiles/container.dir/build.make CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.provides.build
.PHONY : CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.provides

CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.provides.build: CMakeFiles/container.dir/src/Container/holeblockref.cpp.o

# Object files for target container
container_OBJECTS = \
"CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o" \
"CMakeFiles/container.dir/src/Container/holeblockref.cpp.o"

# External object files for target container
container_EXTERNAL_OBJECTS =

../lib/Release/libcontainer.a: CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o
../lib/Release/libcontainer.a: CMakeFiles/container.dir/src/Container/holeblockref.cpp.o
../lib/Release/libcontainer.a: CMakeFiles/container.dir/build.make
../lib/Release/libcontainer.a: CMakeFiles/container.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../lib/Release/libcontainer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/container.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/container.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/container.dir/build: ../lib/Release/libcontainer.a
.PHONY : CMakeFiles/container.dir/build

CMakeFiles/container.dir/requires: CMakeFiles/container.dir/src/Container/attributeContainer.cpp.o.requires
CMakeFiles/container.dir/requires: CMakeFiles/container.dir/src/Container/holeblockref.cpp.o.requires
.PHONY : CMakeFiles/container.dir/requires

CMakeFiles/container.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/container.dir/cmake_clean.cmake
.PHONY : CMakeFiles/container.dir/clean

CMakeFiles/container.dir/depend:
	cd /home/gpeiffert/Desktop/CGoGN-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build /home/gpeiffert/Desktop/CGoGN-master/build/CMakeFiles/container.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/container.dir/depend
