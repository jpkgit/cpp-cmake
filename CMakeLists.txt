cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(cpp VERSION 1.0.1)
add_executable(${PROJECT_NAME} "main.cpp")

configure_file(version.h.in version.h)

target_include_directories(cpp PUBLIC "${PROJECT_BINARY_DIR}" )

add_subdirectory(market)
target_link_libraries(${PROJECT_NAME} market)