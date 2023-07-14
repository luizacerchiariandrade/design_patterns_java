cmake_minimum_required(VERSION 2.8.11)
project(COMMAND_PATTERN)

include_directories(/Users/ramiz/Documents/repos/mine/googletest/googletest/include)
include_directories(/Users/ramiz/Documents/repos/mine/googletest/googlemock/include)
link_directories(/Users/ramiz/Documents/repos/mine/googletest/googletest/libs)
link_directories(/Users/ramiz/Documents/repos/mine/googletest/googlemock/libs)

set(SRCS src/main.cpp remotecontroller/remote_controller.cpp sdk/robot.cpp remotecontroller/commands/move_robot_command.cpp remotecontroller/commands/turn_robot_command.cpp remotecontroller/commands/beep_robot_command.cpp remotecontroller/button.cpp tests/sample_tests.cpp)
#use C++11
set_source_files_properties(${SRCS} PROPERTIES COMPILE_FLAGS -std=c++0x)

#create the executable 
add_executable(command_pattern ${SRCS})

target_link_libraries(command_pattern libgtest_main.a libgtest.a)

