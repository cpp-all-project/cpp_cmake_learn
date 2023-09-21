# 嵌套 cmake 的子目录
cmake_minimum_required(VERSION 3.26)
project(utils)

aux_source_directory(./ SRC)
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})


# 静态库中链接静态库
link_directories(${PROJECT_SOURCE_DIR}/../lib)
link_libraries(static_lib)

# 指定静态库
add_library(${UTILS_LIB_NAME} STATIC ${SRC})
# 静态库中链接动态库
target_link_libraries(${UTILS_LIB_NAME} PUBLIC dyn_lib)