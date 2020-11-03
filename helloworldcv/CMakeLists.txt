cmake_minimum_required(VERSION 2.8.3)

project(hello_cv_1)

add_compile_options(-std=c++11)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(include)

#add_executable(hello_cv_1 src/main.cpp src/hello_cv_1.cpp)

message(${LIBRARY_OUTPUT_PATH})
message("nihaoz")

add_library(hello_cv_2_lib SHARED src/hello_cv_1.cpp)

add_library(hello_cv2_add_static_lib STATIC src/hello_cv_1.cpp)

set_target_properties(hello_cv2_add_static_lib PROPERTIES OUTPUT_NAME "hello_cv_2_lib")