add_library(fancy)
add_library(lib::fancy ALIAS fancy)
target_sources(fancy
    PUBLIC  fancy.h
    PRIVATE fancy.cpp
)
target_include_directories(fancy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
