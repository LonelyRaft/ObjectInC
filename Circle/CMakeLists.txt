
add_library(Circle circle.c)
target_include_directories(Circle PUBLIC "${PROJECT_SOURCE_DIR}/Point")
target_include_directories(Circle INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

