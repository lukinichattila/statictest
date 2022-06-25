set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
project(STATICTEST)
cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_PROJECT_VERSION 1.0.1)
# -----------------GOOGLE Test file inclusions--------------------
include( FetchContent )

set(GTEST_HOME "${CMAKE_CURRENT_BINARY_DIR}/gtest")

FetchContent_Declare (
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.8.1
  SOURCE_DIR "${GTEST_HOME}/src"
  BINARY_DIR "${GTEST_HOME}/build"
)

FetchContent_GetProperties( googletest )

if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

FetchContent_MakeAvailable( googletest )
enable_testing()
# -----------------------------build main program---------------------------
SET(projectdir ${CMAKE_SOURCE_DIR})
add_library( sourcefiles STATIC ${CMAKE_SOURCE_DIR}/src/operation.cpp 
                                ${CMAKE_SOURCE_DIR}/src/addition.cpp
                                ${CMAKE_SOURCE_DIR}/src/substract.cpp
                                ${CMAKE_SOURCE_DIR}/src/subtractoperation.cpp)
target_include_directories(sourcefiles PRIVATE ${CMAKE_SOURCE_DIR}/include )
add_executable( statictest ${CMAKE_SOURCE_DIR}/main.cpp)
target_link_libraries(statictest sourcefiles)
target_include_directories(statictest PRIVATE ${CMAKE_SOURCE_DIR}/include )


# -----------------------------build test files-----------------------------
add_library( testsourcefiles STATIC ${CMAKE_SOURCE_DIR}/src/operation.cpp 
                                ${CMAKE_SOURCE_DIR}/src/mockaddition.cpp
                                ${CMAKE_SOURCE_DIR}/src/mocksubstract.cpp
                                ${CMAKE_SOURCE_DIR}/src/subtractoperation.cpp)
target_link_libraries(testsourcefiles gtest_main gmock_main) 
target_include_directories(testsourcefiles PRIVATE ${CMAKE_SOURCE_DIR}/include )                               
add_executable( teststatictest ${CMAKE_SOURCE_DIR}/maintest.cpp)
target_link_libraries(teststatictest testsourcefiles gtest_main gmock_main)
target_include_directories(teststatictest PRIVATE ${CMAKE_SOURCE_DIR}/include )