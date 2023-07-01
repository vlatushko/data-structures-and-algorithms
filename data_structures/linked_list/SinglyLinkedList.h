//
// Created by vasyl on 5/14/2023.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H

#include "Node.h"
#include "vector"

template<typename T>
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void push(T data);
    void append(T data);
    bool remove(Node<T>* node);
    auto get_head_node();
    void traverse(void (*func_ptr)(Node<T>*));

private:
    Node<T>* head;
    Node<T>* tail;
};

#include "SinglyLinkedList.tpp"

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H
