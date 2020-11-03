cmake_minimum_required(VERSION 3.10)
PROJECT(TESTCMAKE)
set(TEST_FILE "log.txt")
message("CMAKE_CURRENT_LIST_FILE:${CMAKE_CURRENT_LIST_FILE}")
message("CMAKE_COMMAND:${CMAKE_COMMAND}")
add_custom_command(OUTPUT  ${TEST_FILE}
    COMMAND echo "Generating log.txt file..."
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_LIST_FILE} ${TEST_FILE}
    COMMENT  "This is a test  aaaaaa"
)

add_custom_target(Test1 ALL)

add_custom_command(TARGET Test1
    POST_BUILD  
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_LIST_FILE} ${TEST_FILE}
    COMMAND echo "executing a fake command"
    COMMENT "This command will be executed before building target Test1"
)