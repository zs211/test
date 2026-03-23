cmake_minimum_required(VERSION 3.10)
project(advanced_demo)

# 头文件路径（对应 include/ 文件夹）
include_directories(include)

# 自动搜索 src/ 下所有 cpp 文件
file(GLOB SRC_FILES src/*.cpp)

# 生成可执行文件：main.cpp 在根目录，SRC_FILES 是 src/ 下的文件
add_executable(main
    main.cpp
    ${SRC_FILES}
)

# 链接库（必须在 add_executable 之后）
target_link_libraries(main
    pthread
    m
)