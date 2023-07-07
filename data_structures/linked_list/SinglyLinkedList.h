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

    Node<T>* push(T data);
    Node<T>* append(T data);
    bool remove(Node<T>* node);
    bool remove(T val);
    auto get_head_node();
    void traverse(void (*func_ptr)(Node<T>*));
    bool is_empty() const;
    Node<T>* find_node(T val);

private:
    Node<T>* head;
};

#include "SinglyLinkedList.tpp"

#endif //DATA_STRUCTURES_AND_ALGORITHMS_SINGLYLINKEDLIST_H
