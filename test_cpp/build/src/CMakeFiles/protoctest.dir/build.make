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
CMAKE_SOURCE_DIR = /home/zyh/cmakelearning/test_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zyh/cmakelearning/test_cpp/build

# Include any dependencies generated for this target.
include src/CMakeFiles/protoctest.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/protoctest.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/protoctest.dir/flags.make

src/CMakeFiles/protoctest.dir/protoc_test.cpp.o: src/CMakeFiles/protoctest.dir/flags.make
src/CMakeFiles/protoctest.dir/protoc_test.cpp.o: ../src/protoc_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zyh/cmakelearning/test_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/protoctest.dir/protoc_test.cpp.o"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protoctest.dir/protoc_test.cpp.o -c /home/zyh/cmakelearning/test_cpp/src/protoc_test.cpp

src/CMakeFiles/protoctest.dir/protoc_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protoctest.dir/protoc_test.cpp.i"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zyh/cmakelearning/test_cpp/src/protoc_test.cpp > CMakeFiles/protoctest.dir/protoc_test.cpp.i

src/CMakeFiles/protoctest.dir/protoc_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protoctest.dir/protoc_test.cpp.s"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zyh/cmakelearning/test_cpp/src/protoc_test.cpp -o CMakeFiles/protoctest.dir/protoc_test.cpp.s

src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.requires:

.PHONY : src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.requires

src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.provides: src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/protoctest.dir/build.make src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.provides.build
.PHONY : src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.provides

src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.provides.build: src/CMakeFiles/protoctest.dir/protoc_test.cpp.o


src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o: src/CMakeFiles/protoctest.dir/flags.make
src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o: ../protoc/addressbook.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zyh/cmakelearning/test_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o -c /home/zyh/cmakelearning/test_cpp/protoc/addressbook.pb.cc

src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.i"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zyh/cmakelearning/test_cpp/protoc/addressbook.pb.cc > CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.i

src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.s"
	cd /home/zyh/cmakelearning/test_cpp/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zyh/cmakelearning/test_cpp/protoc/addressbook.pb.cc -o CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.s

src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.requires:

.PHONY : src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.requires

src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.provides: src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.requires
	$(MAKE) -f src/CMakeFiles/protoctest.dir/build.make src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.provides.build
.PHONY : src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.provides

src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.provides.build: src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o


# Object files for target protoctest
protoctest_OBJECTS = \
"CMakeFiles/protoctest.dir/protoc_test.cpp.o" \
"CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o"

# External object files for target protoctest
protoctest_EXTERNAL_OBJECTS =

src/protoctest: src/CMakeFiles/protoctest.dir/protoc_test.cpp.o
src/protoctest: src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o
src/protoctest: src/CMakeFiles/protoctest.dir/build.make
src/protoctest: /usr/local/lib/libprotobuf.so
src/protoctest: src/CMakeFiles/protoctest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zyh/cmakelearning/test_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable protoctest"
	cd /home/zyh/cmakelearning/test_cpp/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protoctest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/protoctest.dir/build: src/protoctest

.PHONY : src/CMakeFiles/protoctest.dir/build

src/CMakeFiles/protoctest.dir/requires: src/CMakeFiles/protoctest.dir/protoc_test.cpp.o.requires
src/CMakeFiles/protoctest.dir/requires: src/CMakeFiles/protoctest.dir/__/protoc/addressbook.pb.cc.o.requires

.PHONY : src/CMakeFiles/protoctest.dir/requires

src/CMakeFiles/protoctest.dir/clean:
	cd /home/zyh/cmakelearning/test_cpp/build/src && $(CMAKE_COMMAND) -P CMakeFiles/protoctest.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/protoctest.dir/clean

src/CMakeFiles/protoctest.dir/depend:
	cd /home/zyh/cmakelearning/test_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zyh/cmakelearning/test_cpp /home/zyh/cmakelearning/test_cpp/src /home/zyh/cmakelearning/test_cpp/build /home/zyh/cmakelearning/test_cpp/build/src /home/zyh/cmakelearning/test_cpp/build/src/CMakeFiles/protoctest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/protoctest.dir/depend

