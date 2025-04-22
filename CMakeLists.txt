cmake_minimum_required(VERSION 3.10)
project(TerminalApp)

set(CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(TerminalApp main.cpp)
target_link_libraries(TerminalApp ${CURSES_LIBRARIES})
set_target_properties(TerminalApp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
