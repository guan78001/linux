cmake_minimum_required(VERSION 2.8)

PROJECT (Hello)
SET(SRC_LIST hello.cpp)
ADD_EXECUTABLE(Hello  ${SRC_LIST})

#no work in linux
#set(EXECUTABLE_OUTPUT_PATH  "${PROJECT_BINARY_DIR}/bin")
#set(LIBRARY_OUTPUT_PATH     "${PROJECT_BINARY_DIR}/bin")


