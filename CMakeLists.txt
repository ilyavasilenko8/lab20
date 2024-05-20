cmake_minimum_required(VERSION 3.27)
project(lab__dm C)

set(CMAKE_C_STANDARD 11)

add_executable(lab__dm main.c
        libs/algorithms/ordered_array.c
        libs/algorithms/ordered_array.h
        libs/algorithms/array/array.c
        libs/algorithms/array/array.h
        libs/data_structures/bitset/bitset.c
        libs/data_structures/bitset/bitset.h
        libs/data_structures/bitset/autotest_bitset.c
        libs/data_structures/matrix/matrix.c
        libs/data_structures/matrix/matrix.h
        libs/data_structures/lab20/lab20.c
        libs/data_structures/lab20/lab20.h
)

add_subdirectory(libs)
target_link_libraries(lab__dm data_structures)
target_link_libraries(lab__dm algorithms)
