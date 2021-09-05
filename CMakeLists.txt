cmake_minimum_required(VERSION 3.12.0)
project(AceLayer VERSION 0.2.0)

set(CMAKE_VERBOSE_MAKEFILE=ON)

# enable testing
include(CTest)
enable_testing()

# define paths to the AceFEM files
set(SMSHeader "${CMAKE_SOURCE_DIR}/assets/sms.h")
set(SMSUtil   "${CMAKE_SOURCE_DIR}/assets/SMSUtility.c")
set(AceHeader "${CMAKE_SOURCE_DIR}/include/" "${CMAKE_SOURCE_DIR}/assets/")

# build the shared library: libacelayer.xx
add_subdirectory(src)

# build the tests !Currently the tests fail so that i can see the output directly!
add_subdirectory(tests)