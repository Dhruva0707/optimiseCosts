# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/dhruva/optimiseCosts/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dhruva/optimiseCosts/build

# Include any dependencies generated for this target.
include optimise/CMakeFiles/takeInput.dir/depend.make

# Include the progress variables for this target.
include optimise/CMakeFiles/takeInput.dir/progress.make

# Include the compile flags for this target's objects.
include optimise/CMakeFiles/takeInput.dir/flags.make

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o: optimise/CMakeFiles/takeInput.dir/flags.make
optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o: /home/dhruva/optimiseCosts/src/optimise/src/takeInput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dhruva/optimiseCosts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o"
	cd /home/dhruva/optimiseCosts/build/optimise && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/takeInput.dir/src/takeInput.cpp.o -c /home/dhruva/optimiseCosts/src/optimise/src/takeInput.cpp

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/takeInput.dir/src/takeInput.cpp.i"
	cd /home/dhruva/optimiseCosts/build/optimise && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dhruva/optimiseCosts/src/optimise/src/takeInput.cpp > CMakeFiles/takeInput.dir/src/takeInput.cpp.i

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/takeInput.dir/src/takeInput.cpp.s"
	cd /home/dhruva/optimiseCosts/build/optimise && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dhruva/optimiseCosts/src/optimise/src/takeInput.cpp -o CMakeFiles/takeInput.dir/src/takeInput.cpp.s

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.requires:

.PHONY : optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.requires

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.provides: optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.requires
	$(MAKE) -f optimise/CMakeFiles/takeInput.dir/build.make optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.provides.build
.PHONY : optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.provides

optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.provides.build: optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o


# Object files for target takeInput
takeInput_OBJECTS = \
"CMakeFiles/takeInput.dir/src/takeInput.cpp.o"

# External object files for target takeInput
takeInput_EXTERNAL_OBJECTS =

/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: optimise/CMakeFiles/takeInput.dir/build.make
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/libroscpp.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_filesystem.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_signals.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/librosconsole.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/liblog4cxx.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_regex.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/librostime.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /opt/ros/kinetic/lib/libcpp_common.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_system.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_thread.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_chrono.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_date_time.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libboost_atomic.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libpthread.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: /usr/lib/i386-linux-gnu/libconsole_bridge.so
/home/dhruva/optimiseCosts/devel/lib/optimise/takeInput: optimise/CMakeFiles/takeInput.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dhruva/optimiseCosts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/dhruva/optimiseCosts/devel/lib/optimise/takeInput"
	cd /home/dhruva/optimiseCosts/build/optimise && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/takeInput.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
optimise/CMakeFiles/takeInput.dir/build: /home/dhruva/optimiseCosts/devel/lib/optimise/takeInput

.PHONY : optimise/CMakeFiles/takeInput.dir/build

optimise/CMakeFiles/takeInput.dir/requires: optimise/CMakeFiles/takeInput.dir/src/takeInput.cpp.o.requires

.PHONY : optimise/CMakeFiles/takeInput.dir/requires

optimise/CMakeFiles/takeInput.dir/clean:
	cd /home/dhruva/optimiseCosts/build/optimise && $(CMAKE_COMMAND) -P CMakeFiles/takeInput.dir/cmake_clean.cmake
.PHONY : optimise/CMakeFiles/takeInput.dir/clean

optimise/CMakeFiles/takeInput.dir/depend:
	cd /home/dhruva/optimiseCosts/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dhruva/optimiseCosts/src /home/dhruva/optimiseCosts/src/optimise /home/dhruva/optimiseCosts/build /home/dhruva/optimiseCosts/build/optimise /home/dhruva/optimiseCosts/build/optimise/CMakeFiles/takeInput.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : optimise/CMakeFiles/takeInput.dir/depend
