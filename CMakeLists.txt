cmake_minimum_required(VERSION 3.10)
project(QtBeautyDemo)

# C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt 自动编译
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 找 Qt 库
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

# 自动包含 src 目录
include_directories(src)

# 自动加载 src 下所有代码
file(GLOB SOURCES
    src/*.cpp
    src/*.h
    src/*.ui
)

# 生成可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

# 链接 Qt
target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Widgets
    Qt5::Gui
)