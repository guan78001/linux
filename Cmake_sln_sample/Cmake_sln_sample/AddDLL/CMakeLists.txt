add_library(AddDLL SHARED AddDLL.h AddDLL.cpp)
#target_link_libraries(AddDLL PRIVATE AddLib AddLib2)
#target_link_libraries(AddDLL PUBLIC AddLib  AddLib2)
#target_link_libraries(AddDLL  AddLib AddLib2)
add_definitions(-DADDDLL_EXPORTS)

