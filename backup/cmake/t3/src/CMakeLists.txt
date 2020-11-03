INCLUDE_DIRECTORIES(/tmp/t2/usr/include/hello)
LINK_DIRECTORIES(/tmp/t2/usr/lib)
ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main libhello.so)