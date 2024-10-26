//
// Created by vasyl on 5/14/2023.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_NODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_NODE_H

template<typename T>
class Node {
public:
    Node(T data, Node<T>* nextNode);

    T data;
    Node<T>* nextNode;
};


//implementation of the header members
template<typename T>
Node<T>::Node(T data, Node<T> *nextNode) {
    this->data = data;
    this->nextNode = nextNode;
}
#endif //DATA_STRUCTURES_AND_ALGORITHMS_NODE_H
