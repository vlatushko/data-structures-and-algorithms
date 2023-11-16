//
// Created by Vasyl Latushko on 11/16/23.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_DOUBLYLINKEDLISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_DOUBLYLINKEDLISTNODE_H

#include "../Node.h"

template<typename T>
class DoublyLinkedListNode : public Node<T> {
public:
    DoublyLinkedListNode(T data, DoublyLinkedListNode<T>* prevNode, DoublyLinkedListNode<T>* nextNode)
        : Node<T>(data, nextNode){

    }

    DoublyLinkedListNode<T>* prevNode;
};

#include "DoublyLinkedListNode.tpp"
#endif //DATA_STRUCTURES_AND_ALGORITHMS_DOUBLYLINKEDLISTNODE_H
