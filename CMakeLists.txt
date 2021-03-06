cmake_minimum_required(VERSION 3.12.0)
project(AceLayer VERSION 0.2.0)

set(CMAKE_VERBOSE_MAKEFILE=ON)
set(CMAKE_CXX_STANDARD 11)

# enable testing
include(CTest)
enable_testing()

# define paths to the AceFEM files
set(SMSHeader "${CMAKE_CURRENT_SOURCE_DIR}/assets/")
set(SMSElmt   "${CMAKE_CURRENT_SOURCE_DIR}/elements/")
set(SMSUtil   "${CMAKE_CURRENT_SOURCE_DIR}/assets/SMSUtility.c")
set(AceHeader "${CMAKE_CURRENT_SOURCE_DIR}/include/" "${CMAKE_CURRENT_SOURCE_DIR}/assets/")


# build the shared library: libacelayer.xx
add_subdirectory(src)

# build the tests !Currently the tests fail so that i can see the output directly!
add_subdirectory(tests)

# use cmake to figure out compiler and flags used for the compilation of the element
configure_file(
    "${PROJECT_SOURCE_DIR}/include/compile.hpp.in"
    "${PROJECT_BINARY_DIR}/include/compile.hpp"
)