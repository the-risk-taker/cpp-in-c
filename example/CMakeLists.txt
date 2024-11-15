add_executable(example_c example.c)
target_link_libraries(example_c PRIVATE lib::fancy)
add_custom_target(run-example COMMAND $<TARGET_FILE:example_c>)
