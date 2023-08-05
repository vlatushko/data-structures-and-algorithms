cmake_minimum_required(VERSION 3.25)
project(data_structures_and_algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(sandbox sandbox.cpp)

add_executable(array data_structures/array/array_playground.cpp)

add_executable(linked_list
        data_structures/linked_list/linked_list_playground.cpp

        data_structures/linked_list/SinglyLinkedList.cpp
        data_structures/linked_list/SinglyLinkedList.h

        data_structures/linked_list/Base/Node.cpp
        data_structures/linked_list/Base/Node.h

        data_structures/linked_list/Base/LinkedListBase.h
        data_structures/linked_list/Base/LinkedListBase.cpp)