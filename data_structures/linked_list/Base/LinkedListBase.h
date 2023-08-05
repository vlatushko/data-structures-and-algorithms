//
// Created by vasyl on 8/5/23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTBASE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTBASE_H

#include "Node.h"

template<typename T>
class LinkedListBase {
public:
    LinkedListBase();
    ~LinkedListBase();

    auto getHeadNode();
    bool remove(Node<T>* node);
    bool remove(T val);
    Node<T>* findNode(T val);

protected:
    Node<T>* head;

    bool isEmpty() const;
    bool removeHead();
};

#include "LinkedListBase.tpp"

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTBASE_H