add_executable(console tutorial.cxx)
#target_link_libraries(console PRIVATE AddDLL AddLib AddLib2)
target_link_libraries(console AddDLL AddLib AddLib2)

