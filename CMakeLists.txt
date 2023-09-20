# cmake 最低版本
cmake_minimum_required(VERSION 3.26)
# 项目名称
project(learn VERSION 1.0.0 DESCRIPTION "learn cpp")

# 设置嵌套 cmake 中的共享静态库的路径
set(LIB_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXEC_PATH ${PROJECT_SOURCE_DIR}/bin)
set(HEAD_PATH ${PROJECT_SOURCE_DIR}/include)

# 设置嵌套 cmake 中的库名字
set(CONFIG_LIB_NAME config)
set(UTILS_LIB_NAME utils)

# 指定嵌套 cmake 的目录名
add_subdirectory(utils)
add_subdirectory(config)
add_subdirectory(test)
add_subdirectory(src)