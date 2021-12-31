add_library(acelayer SHARED AceGenElement.cpp ${SMSUtil} AceFEMDataLayer.cpp)

target_compile_definitions(acelayer PRIVATE 
    SMSHeader="${SMSHeader}"
    SMSUtil="${SMSUtil}"
    SMSCCompiler="${CMAKE_C_COMPILER}"
    "$<$<CONFIG:Debug>:CMakeDebugConfig=1>"
    )
target_include_directories(acelayer PUBLIC ${AceHeader} ${CMAKE_CURRENT_BINARY_DIR}/../include/)

# notes: the assets must be copied and their path be modified in install case!