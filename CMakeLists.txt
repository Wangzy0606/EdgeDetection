cmake_minimum_required(VERSION 3.10)
project(EdgeDetectionProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 查找OpenCV库
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# 生成可执行文件
add_executable(EdgeDetection src/main.cpp)

# 链接OpenCV库
target_link_libraries(EdgeDetection ${OpenCV_LIBS})