add_executable(AceElmt ${CMAKE_CURRENT_SOURCE_DIR}/test_element.cpp)
target_link_libraries(AceElmt PRIVATE acelayer)

add_executable(AceData ${CMAKE_CURRENT_SOURCE_DIR}/test_data.cpp)
target_link_libraries(AceData PRIVATE acelayer)

add_executable(AceAssembly ${CMAKE_CURRENT_SOURCE_DIR}/test_data.cpp)
target_link_libraries(AceAssembly PRIVATE acelayer)

add_test(AceElementTest     AceElmt)
add_test(AceAssemblyTest    AceAssembly)
add_test(AceDataTest        AceData)