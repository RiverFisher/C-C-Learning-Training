# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /opt/CLion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/CLion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wizard/CLionProjects/InFileStorage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wizard/CLionProjects/InFileStorage/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/InFileStorage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/InFileStorage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/InFileStorage.dir/flags.make

CMakeFiles/InFileStorage.dir/main.cpp.o: CMakeFiles/InFileStorage.dir/flags.make
CMakeFiles/InFileStorage.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wizard/CLionProjects/InFileStorage/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/InFileStorage.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/InFileStorage.dir/main.cpp.o -c /home/wizard/CLionProjects/InFileStorage/main.cpp

CMakeFiles/InFileStorage.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InFileStorage.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wizard/CLionProjects/InFileStorage/main.cpp > CMakeFiles/InFileStorage.dir/main.cpp.i

CMakeFiles/InFileStorage.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InFileStorage.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wizard/CLionProjects/InFileStorage/main.cpp -o CMakeFiles/InFileStorage.dir/main.cpp.s

CMakeFiles/InFileStorage.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/InFileStorage.dir/main.cpp.o.requires

CMakeFiles/InFileStorage.dir/main.cpp.o.provides: CMakeFiles/InFileStorage.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/InFileStorage.dir/build.make CMakeFiles/InFileStorage.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/InFileStorage.dir/main.cpp.o.provides

CMakeFiles/InFileStorage.dir/main.cpp.o.provides.build: CMakeFiles/InFileStorage.dir/main.cpp.o


# Object files for target InFileStorage
InFileStorage_OBJECTS = \
"CMakeFiles/InFileStorage.dir/main.cpp.o"

# External object files for target InFileStorage
InFileStorage_EXTERNAL_OBJECTS =

InFileStorage: CMakeFiles/InFileStorage.dir/main.cpp.o
InFileStorage: CMakeFiles/InFileStorage.dir/build.make
InFileStorage: CMakeFiles/InFileStorage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wizard/CLionProjects/InFileStorage/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable InFileStorage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/InFileStorage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/InFileStorage.dir/build: InFileStorage

.PHONY : CMakeFiles/InFileStorage.dir/build

CMakeFiles/InFileStorage.dir/requires: CMakeFiles/InFileStorage.dir/main.cpp.o.requires

.PHONY : CMakeFiles/InFileStorage.dir/requires

CMakeFiles/InFileStorage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/InFileStorage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/InFileStorage.dir/clean

CMakeFiles/InFileStorage.dir/depend:
	cd /home/wizard/CLionProjects/InFileStorage/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wizard/CLionProjects/InFileStorage /home/wizard/CLionProjects/InFileStorage /home/wizard/CLionProjects/InFileStorage/cmake-build-debug /home/wizard/CLionProjects/InFileStorage/cmake-build-debug /home/wizard/CLionProjects/InFileStorage/cmake-build-debug/CMakeFiles/InFileStorage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/InFileStorage.dir/depend

