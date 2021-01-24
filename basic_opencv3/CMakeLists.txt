cmake_minimum_required(VERSION 3.0)
project("test-opencv")

SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# configure file path
set(LINUX_LOGO_PATH "${CMAKE_CURRENT_SOURCE_DIR}/img/LinuxLogo.jpg")
set(WINDOWS_LOGO_PATH "${CMAKE_CURRENT_SOURCE_DIR}/img/WindowsLogo.jpg")
configure_file(src/param.h.in ${CMAKE_BINARY_DIR}/param.h)
include_directories(${CMAKE_BINARY_DIR})

#include
INCLUDE_DIRECTORIES(src)
ADD_EXECUTABLE(${CMAKE_PROJECT_NAME} src/main.cpp )
target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})