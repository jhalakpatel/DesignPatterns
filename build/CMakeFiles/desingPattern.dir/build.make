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
CMAKE_SOURCE_DIR = /home/jhalakp/dev/programming/DesignPatterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jhalakp/dev/programming/DesignPatterns/build

# Include any dependencies generated for this target.
include CMakeFiles/desingPattern.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/desingPattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/desingPattern.dir/flags.make

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o: ../src/AbstractFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/AbstractFactory.cpp

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/AbstractFactory.cpp > CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.i

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/AbstractFactory.cpp -o CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.s

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.requires

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.provides: CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.provides

CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o


CMakeFiles/desingPattern.dir/src/Adapter.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Adapter.cpp.o: ../src/Adapter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/desingPattern.dir/src/Adapter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Adapter.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Adapter.cpp

CMakeFiles/desingPattern.dir/src/Adapter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Adapter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Adapter.cpp > CMakeFiles/desingPattern.dir/src/Adapter.cpp.i

CMakeFiles/desingPattern.dir/src/Adapter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Adapter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Adapter.cpp -o CMakeFiles/desingPattern.dir/src/Adapter.cpp.s

CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Adapter.cpp.o


CMakeFiles/desingPattern.dir/src/Command.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Command.cpp.o: ../src/Command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/desingPattern.dir/src/Command.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Command.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Command.cpp

CMakeFiles/desingPattern.dir/src/Command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Command.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Command.cpp > CMakeFiles/desingPattern.dir/src/Command.cpp.i

CMakeFiles/desingPattern.dir/src/Command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Command.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Command.cpp -o CMakeFiles/desingPattern.dir/src/Command.cpp.s

CMakeFiles/desingPattern.dir/src/Command.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Command.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Command.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Command.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Command.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Command.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Command.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Command.cpp.o


CMakeFiles/desingPattern.dir/src/Decorator.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Decorator.cpp.o: ../src/Decorator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/desingPattern.dir/src/Decorator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Decorator.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Decorator.cpp

CMakeFiles/desingPattern.dir/src/Decorator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Decorator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Decorator.cpp > CMakeFiles/desingPattern.dir/src/Decorator.cpp.i

CMakeFiles/desingPattern.dir/src/Decorator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Decorator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Decorator.cpp -o CMakeFiles/desingPattern.dir/src/Decorator.cpp.s

CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Decorator.cpp.o


CMakeFiles/desingPattern.dir/src/Facade.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Facade.cpp.o: ../src/Facade.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/desingPattern.dir/src/Facade.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Facade.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Facade.cpp

CMakeFiles/desingPattern.dir/src/Facade.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Facade.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Facade.cpp > CMakeFiles/desingPattern.dir/src/Facade.cpp.i

CMakeFiles/desingPattern.dir/src/Facade.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Facade.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Facade.cpp -o CMakeFiles/desingPattern.dir/src/Facade.cpp.s

CMakeFiles/desingPattern.dir/src/Facade.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Facade.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Facade.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Facade.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Facade.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Facade.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Facade.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Facade.cpp.o


CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o: ../src/FactoryMethod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/FactoryMethod.cpp

CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/FactoryMethod.cpp > CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.i

CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/FactoryMethod.cpp -o CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.s

CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.requires

CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.provides: CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.provides

CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o


CMakeFiles/desingPattern.dir/src/Observer.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Observer.cpp.o: ../src/Observer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/desingPattern.dir/src/Observer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Observer.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Observer.cpp

CMakeFiles/desingPattern.dir/src/Observer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Observer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Observer.cpp > CMakeFiles/desingPattern.dir/src/Observer.cpp.i

CMakeFiles/desingPattern.dir/src/Observer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Observer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Observer.cpp -o CMakeFiles/desingPattern.dir/src/Observer.cpp.s

CMakeFiles/desingPattern.dir/src/Observer.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Observer.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Observer.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Observer.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Observer.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Observer.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Observer.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Observer.cpp.o


CMakeFiles/desingPattern.dir/src/Proxy.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Proxy.cpp.o: ../src/Proxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/desingPattern.dir/src/Proxy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Proxy.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Proxy.cpp

CMakeFiles/desingPattern.dir/src/Proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Proxy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Proxy.cpp > CMakeFiles/desingPattern.dir/src/Proxy.cpp.i

CMakeFiles/desingPattern.dir/src/Proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Proxy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Proxy.cpp -o CMakeFiles/desingPattern.dir/src/Proxy.cpp.s

CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Proxy.cpp.o


CMakeFiles/desingPattern.dir/src/Singleton.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Singleton.cpp.o: ../src/Singleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/desingPattern.dir/src/Singleton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Singleton.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Singleton.cpp

CMakeFiles/desingPattern.dir/src/Singleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Singleton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Singleton.cpp > CMakeFiles/desingPattern.dir/src/Singleton.cpp.i

CMakeFiles/desingPattern.dir/src/Singleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Singleton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Singleton.cpp -o CMakeFiles/desingPattern.dir/src/Singleton.cpp.s

CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Singleton.cpp.o


CMakeFiles/desingPattern.dir/src/Strategy.cpp.o: CMakeFiles/desingPattern.dir/flags.make
CMakeFiles/desingPattern.dir/src/Strategy.cpp.o: ../src/Strategy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/desingPattern.dir/src/Strategy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/desingPattern.dir/src/Strategy.cpp.o -c /home/jhalakp/dev/programming/DesignPatterns/src/Strategy.cpp

CMakeFiles/desingPattern.dir/src/Strategy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desingPattern.dir/src/Strategy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jhalakp/dev/programming/DesignPatterns/src/Strategy.cpp > CMakeFiles/desingPattern.dir/src/Strategy.cpp.i

CMakeFiles/desingPattern.dir/src/Strategy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desingPattern.dir/src/Strategy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jhalakp/dev/programming/DesignPatterns/src/Strategy.cpp -o CMakeFiles/desingPattern.dir/src/Strategy.cpp.s

CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.requires:

.PHONY : CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.requires

CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.provides: CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.requires
	$(MAKE) -f CMakeFiles/desingPattern.dir/build.make CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.provides.build
.PHONY : CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.provides

CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.provides.build: CMakeFiles/desingPattern.dir/src/Strategy.cpp.o


# Object files for target desingPattern
desingPattern_OBJECTS = \
"CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Adapter.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Command.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Decorator.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Facade.cpp.o" \
"CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Observer.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Proxy.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Singleton.cpp.o" \
"CMakeFiles/desingPattern.dir/src/Strategy.cpp.o"

# External object files for target desingPattern
desingPattern_EXTERNAL_OBJECTS =

../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Adapter.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Command.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Decorator.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Facade.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Observer.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Proxy.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Singleton.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/src/Strategy.cpp.o
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/build.make
../lib/libdesingPattern.so: CMakeFiles/desingPattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared library ../lib/libdesingPattern.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/desingPattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/desingPattern.dir/build: ../lib/libdesingPattern.so

.PHONY : CMakeFiles/desingPattern.dir/build

CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/AbstractFactory.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Adapter.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Command.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Decorator.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Facade.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/FactoryMethod.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Observer.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Proxy.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Singleton.cpp.o.requires
CMakeFiles/desingPattern.dir/requires: CMakeFiles/desingPattern.dir/src/Strategy.cpp.o.requires

.PHONY : CMakeFiles/desingPattern.dir/requires

CMakeFiles/desingPattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/desingPattern.dir/cmake_clean.cmake
.PHONY : CMakeFiles/desingPattern.dir/clean

CMakeFiles/desingPattern.dir/depend:
	cd /home/jhalakp/dev/programming/DesignPatterns/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jhalakp/dev/programming/DesignPatterns /home/jhalakp/dev/programming/DesignPatterns /home/jhalakp/dev/programming/DesignPatterns/build /home/jhalakp/dev/programming/DesignPatterns/build /home/jhalakp/dev/programming/DesignPatterns/build/CMakeFiles/desingPattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/desingPattern.dir/depend

