# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/frozenice/Downloads/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/frozenice/Downloads/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frozenice/Projects/StrategyGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frozenice/Projects/StrategyGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StrategyGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StrategyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StrategyGame.dir/flags.make

CMakeFiles/StrategyGame.dir/main.cpp.o: CMakeFiles/StrategyGame.dir/flags.make
CMakeFiles/StrategyGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frozenice/Projects/StrategyGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StrategyGame.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StrategyGame.dir/main.cpp.o -c /home/frozenice/Projects/StrategyGame/main.cpp

CMakeFiles/StrategyGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StrategyGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frozenice/Projects/StrategyGame/main.cpp > CMakeFiles/StrategyGame.dir/main.cpp.i

CMakeFiles/StrategyGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StrategyGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frozenice/Projects/StrategyGame/main.cpp -o CMakeFiles/StrategyGame.dir/main.cpp.s

# Object files for target StrategyGame
StrategyGame_OBJECTS = \
"CMakeFiles/StrategyGame.dir/main.cpp.o"

# External object files for target StrategyGame
StrategyGame_EXTERNAL_OBJECTS =

StrategyGame: CMakeFiles/StrategyGame.dir/main.cpp.o
StrategyGame: CMakeFiles/StrategyGame.dir/build.make
StrategyGame: CMakeFiles/StrategyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frozenice/Projects/StrategyGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StrategyGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StrategyGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StrategyGame.dir/build: StrategyGame

.PHONY : CMakeFiles/StrategyGame.dir/build

CMakeFiles/StrategyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StrategyGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StrategyGame.dir/clean

CMakeFiles/StrategyGame.dir/depend:
	cd /home/frozenice/Projects/StrategyGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frozenice/Projects/StrategyGame /home/frozenice/Projects/StrategyGame /home/frozenice/Projects/StrategyGame/cmake-build-debug /home/frozenice/Projects/StrategyGame/cmake-build-debug /home/frozenice/Projects/StrategyGame/cmake-build-debug/CMakeFiles/StrategyGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StrategyGame.dir/depend

