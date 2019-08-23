cmake_minimum_required(VERSION 3.10)

MESSAGE(STATUS $ENV{BOOST_LIB})
MESSAGE(STATUS $ENV{BOOST_INCLUDE})
MESSAGE(STATUS ${CMAKE_SYSTEM_NAME})

#添加头文件搜索路径
include_directories($ENV{BOOST_INCLUDE})
include_directories(./)
#添加库文件搜索路径
link_directories($ENV{BOOST_LIB})
project(ctest)

set(CMAKE_CXX_STANDARD 14)

add_executable(ctest main.cpp)
