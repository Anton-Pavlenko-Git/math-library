cmake_minimum_required(VERSION 3.20)
project(MathLib VERSION 1.1.0 LANGUAGES CXX)

add_library(math_utils INTERFACE)
add_library(MathLib::math_utils ALIAS math_utils)

target_include_directories(math_utils INTERFACE include)

# Опционально: стандарт C++
target_compile_features(math_utils INTERFACE cxx_std_20)
