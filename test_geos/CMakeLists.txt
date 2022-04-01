cmake_minimum_required(VERSION 3.0)
project("test_geos")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

ADD_EXECUTABLE(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})

# Install step for linking *dylib to the executable_path (not a bundle here)
#IF (APPLE)
#    add_custom_command(
#            TARGET ${CMAKE_PROJECT_NAME}
#            POST_BUILD
#            COMMAND install_name_tool -change @rpath/libgdal.30.dylib @executable_path/libgdal.30.dylib bin/${CMAKE_PROJECT_NAME}
#            COMMENT "Installing GDAL library"
#            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
#    )
#ENDIF (APPLE)
