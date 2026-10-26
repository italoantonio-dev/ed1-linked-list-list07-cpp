cmake_minimum_required(VERSION 3.20)
project(ed1_linked_list_list07_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(exercicio01 src/Exer01_SortedInsertion.cpp)
add_executable(exercicio02 src/Exer02_DeleteNodeWithoutHead.cpp)
add_executable(exercicio03 src/Exer03_ReverseLinkedList.cpp)
add_executable(exercicio04 src/Exer04_MergeTwoSortedLists.cpp)
add_executable(exercicio05 src/Exer05_RemoveNthFromEnd.cpp)

foreach(target exercicio01 exercicio02 exercicio03 exercicio04 exercicio05)
    target_include_directories(${target} PRIVATE include)
endforeach()