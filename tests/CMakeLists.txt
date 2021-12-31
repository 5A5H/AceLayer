add_executable(AceElmt ${CMAKE_CURRENT_SOURCE_DIR}/test_element.cpp)
target_link_libraries(AceElmt PRIVATE acelayer)
target_compile_definitions(AceElmt PRIVATE SMSElmt="${SMSElmt}")

add_executable(AceData ${CMAKE_CURRENT_SOURCE_DIR}/test_data.cpp)
target_link_libraries(AceData PRIVATE acelayer)
target_compile_definitions(AceData PRIVATE SMSElmt="${SMSElmt}")

add_executable(AceAssembly ${CMAKE_CURRENT_SOURCE_DIR}/test_assembly.cpp)
target_link_libraries(AceAssembly PRIVATE acelayer)
target_compile_definitions(AceAssembly PRIVATE SMSElmt="${SMSElmt}")

add_test(AceElementTest     AceElmt)
add_test(AceAssemblyTest    AceAssembly)
add_test(AceDataTest        AceData)