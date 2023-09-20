# 嵌套 cmake 的子目录
cmake_minimum_required(VERSION 3.26)
project(utils_tool)

aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

# 指定静态库
add_library(${UTILS_LIB_NAME} STATIC ${SRC})