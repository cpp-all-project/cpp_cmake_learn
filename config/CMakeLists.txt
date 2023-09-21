# 嵌套 cmake 的子目录
cmake_minimum_required(VERSION 3.26)
project(config)

aux_source_directory(./ SRC)
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

# 指定静态库
add_library(${CONFIG_LIB_NAME} STATIC ${SRC}
        config.h)