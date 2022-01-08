
add_library(Rect rect.c)
target_include_directories(Rect PUBLIC "${PROJECT_SOURCE_DIR}/Point")
target_include_directories(Rect INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

