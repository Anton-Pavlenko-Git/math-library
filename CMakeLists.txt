cmake_minimum_required(VERSION 3.20)
project(MathLib VERSION 1.0.0 LANGUAGES CXX)

# Создаем INTERFACE библиотеку (header-only)
add_library(math_utils INTERFACE)
add_library(MathLib::math_utils ALIAS math_utils)  # Namespace для импорта

# Устанавливаем стандарт C++20 для тех кто линкуется с нами
target_compile_features(math_utils INTERFACE cxx_std_20)

# Добавляем include директорию
target_include_directories(math_utils
    INTERFACE 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Устанавливаем опции компиляции только для этой библиотеки
target_compile_options(math_utils INTERFACE
    -Wall
    -Wpedantic
)
