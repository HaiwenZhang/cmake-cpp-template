set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/mylib)

aux_source_directory(./ DIR_SRCS)

add_executable(demo ${DIR_SRCS})

target_link_libraries(demo Mylib)