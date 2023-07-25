cmake_minimum_required(VERSION 3.14)

project(libCPP_Geometria LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(libCPP_Geometria SHARED
  libCPP_Geometria_global.h
  geometria.cpp
  geometria.h
)

target_compile_definitions(libCPP_Geometria PRIVATE LIBCPP_GEOMETRIA_LIBRARY)
