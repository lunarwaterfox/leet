aux_source_directory(. TEST_SOURCE)
add_executable(test_leet ${TEST_SOURCE})
target_link_libraries(test_leet gtest_main)

include(GoogleTest)
gtest_discover_tests(test_leet)
