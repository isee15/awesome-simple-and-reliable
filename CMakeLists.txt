cmake_minimum_required(VERSION 3.2)
project(awesome_simple_and_reliable)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(awesome_simple_and_reliable ${SOURCE_FILES} c++/md5.h c++/md5.cpp c++/sha1.h c++/sha1.cpp c++/sha2.h c++/sha2.cpp c++/utf8util.h c++/utf8util.cpp c++/base64.h c++/base64.cpp c++/strutil.h c++/strutil.cpp c++/csv.h c++/csv.cpp c++/dateutil.h c++/dateutil.cpp)