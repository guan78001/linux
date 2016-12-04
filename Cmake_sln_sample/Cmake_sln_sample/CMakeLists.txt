cmake_minimum_required(VERSION 2.8)

project(TestDLL)
message(STATUS "bin_path: ${PROJECT_BINARY_DIR}/bin")
set(EXECUTABLE_OUTPUT_PATH  "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH     "${PROJECT_BINARY_DIR}/bin")

add_subdirectory(AddLib)
add_subdirectory(AddLib2)
add_subdirectory(AddDLL)
add_subdirectory(console)


