cmake_policy(SET CMP0091 NEW)

cmake_minimum_required(VERSION 3.0)
project("test-connan")

SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

#include
INCLUDE_DIRECTORIES(src)
ADD_EXECUTABLE(${CMAKE_PROJECT_NAME} src/main.cpp )
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreadedDebug$<$<CONFIG:Debug>:Debug>")
target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})

