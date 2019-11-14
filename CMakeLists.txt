cmake_minimum_required(VERSION 3.9)
project(libft VERSION 0.0.1 LANGUAGES C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "-Wall -Werror -Wall")

File(GLOB_RECURSE SOURCE
        src/*.c
        src/ft_printf/*.c
        includes/*.h)

add_library(libft ${SOURCE})

set_target_properties(libft PROPERTIES
        C_STANDARD 99
        OUTPUT_NAME "ft"
        LIBRARY_OUTPUT_DIRECTORY .
        ARCHIVE_OUTPUT_DIRECTORY .)

target_include_directories(libft PRIVATE . PUBLIC .)