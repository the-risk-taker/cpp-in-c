add_executable(example_c example.c)
set_target_properties(example_c PROPERTIES
    LANGUAGE C
    LINKER_LANGUAGE C
)
target_link_libraries(example_c PRIVATE lib::fancy)
add_custom_target(run-example COMMAND $<TARGET_FILE:example_c>)
