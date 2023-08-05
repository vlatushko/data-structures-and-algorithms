//
// Created by vasyl on 5/14/2023.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H

#include "Base/Node.h"
#include "vector"
#include "Base/LinkedListBase.h"

template<typename T>
class SinglyLinkedList : public LinkedListBase<T> {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    Node<T>* push(T data);
    Node<T>* append(T data);
    void traverse(void (*func_ptr)(Node<T>*));
};

#include "SinglyLinkedList.tpp"

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H
