# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zyh/cmakelearning/helloworldcv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zyh/cmakelearning/helloworldcv/build

# Include any dependencies generated for this target.
include CMakeFiles/hello_cv_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_cv_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_cv_1.dir/flags.make

CMakeFiles/hello_cv_1.dir/src/main.cpp.o: CMakeFiles/hello_cv_1.dir/flags.make
CMakeFiles/hello_cv_1.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zyh/cmakelearning/helloworldcv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_cv_1.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_cv_1.dir/src/main.cpp.o -c /home/zyh/cmakelearning/helloworldcv/src/main.cpp

CMakeFiles/hello_cv_1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_cv_1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zyh/cmakelearning/helloworldcv/src/main.cpp > CMakeFiles/hello_cv_1.dir/src/main.cpp.i

CMakeFiles/hello_cv_1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_cv_1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zyh/cmakelearning/helloworldcv/src/main.cpp -o CMakeFiles/hello_cv_1.dir/src/main.cpp.s

CMakeFiles/hello_cv_1.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/hello_cv_1.dir/src/main.cpp.o.requires

CMakeFiles/hello_cv_1.dir/src/main.cpp.o.provides: CMakeFiles/hello_cv_1.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/hello_cv_1.dir/build.make CMakeFiles/hello_cv_1.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/hello_cv_1.dir/src/main.cpp.o.provides

CMakeFiles/hello_cv_1.dir/src/main.cpp.o.provides.build: CMakeFiles/hello_cv_1.dir/src/main.cpp.o


CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o: CMakeFiles/hello_cv_1.dir/flags.make
CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o: ../src/hello_cv_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zyh/cmakelearning/helloworldcv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o -c /home/zyh/cmakelearning/helloworldcv/src/hello_cv_1.cpp

CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zyh/cmakelearning/helloworldcv/src/hello_cv_1.cpp > CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.i

CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zyh/cmakelearning/helloworldcv/src/hello_cv_1.cpp -o CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.s

CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.requires:

.PHONY : CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.requires

CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.provides: CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.requires
	$(MAKE) -f CMakeFiles/hello_cv_1.dir/build.make CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.provides.build
.PHONY : CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.provides

CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.provides.build: CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o


# Object files for target hello_cv_1
hello_cv_1_OBJECTS = \
"CMakeFiles/hello_cv_1.dir/src/main.cpp.o" \
"CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o"

# External object files for target hello_cv_1
hello_cv_1_EXTERNAL_OBJECTS =

hello_cv_1: CMakeFiles/hello_cv_1.dir/src/main.cpp.o
hello_cv_1: CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o
hello_cv_1: CMakeFiles/hello_cv_1.dir/build.make
hello_cv_1: CMakeFiles/hello_cv_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zyh/cmakelearning/helloworldcv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hello_cv_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello_cv_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_cv_1.dir/build: hello_cv_1

.PHONY : CMakeFiles/hello_cv_1.dir/build

CMakeFiles/hello_cv_1.dir/requires: CMakeFiles/hello_cv_1.dir/src/main.cpp.o.requires
CMakeFiles/hello_cv_1.dir/requires: CMakeFiles/hello_cv_1.dir/src/hello_cv_1.cpp.o.requires

.PHONY : CMakeFiles/hello_cv_1.dir/requires

CMakeFiles/hello_cv_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello_cv_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello_cv_1.dir/clean

CMakeFiles/hello_cv_1.dir/depend:
	cd /home/zyh/cmakelearning/helloworldcv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zyh/cmakelearning/helloworldcv /home/zyh/cmakelearning/helloworldcv /home/zyh/cmakelearning/helloworldcv/build /home/zyh/cmakelearning/helloworldcv/build /home/zyh/cmakelearning/helloworldcv/build/CMakeFiles/hello_cv_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_cv_1.dir/depend

