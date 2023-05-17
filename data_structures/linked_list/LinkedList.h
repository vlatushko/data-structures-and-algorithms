//
// Created by vasyl on 5/14/2023.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

#include "Node.h"
#include "vector"

template<typename T>
class LinkedList {
public:
    explicit LinkedList(Node<T>* headNode);
    ~LinkedList();

    void addNode(T data);
    auto getHeadNode();
    auto getTailNode();

private:
    Node<T>* head;
    Node<T>* tail;
};

#include "LinkedList.tpp"

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
