cmake_minimum_required(VERSION 3.25)
project(data_structures_and_algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(sandbox sandbox.cpp)
add_executable(array data_structures/array/array_playground.cpp)
add_executable(singly_linked_list data_structures/linked_list/singly_linked_list/singly_linked_list_playground.cpp data_structures/linked_list/singly_linked_list/SinglyLinkedList.cpp data_structures/linked_list/singly_linked_list/SinglyLinkedList.h data_structures/linked_list/Node.cpp data_structures/linked_list/Node.h)
add_executable(doubly_linked_list data_structures/linked_list/doubly_linked_list/doubly_linked_list_sandbox.cpp
        data_structures/linked_list/doubly_linked_list/DoublyLinkedListNode.h
        data_structures/linked_list/doubly_linked_list/DoublyLinkedListNode.tpp)
