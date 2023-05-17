//
// Created by vasyl on 5/14/2023.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    auto* headNode = new Node<int>{1, nullptr};

    auto* linkedList = new LinkedList<int>(headNode);
    linkedList->addNode(2);
    linkedList->addNode(3);
    linkedList->addNode(4);
    linkedList->addNode(5);

    auto head = linkedList->getHeadNode();
    auto currentNode = head;

    while(true)
    {
        cout << currentNode->data << endl;

        if (currentNode->nextRef == nullptr)
            break;

        currentNode = currentNode->nextRef;
    }

    delete linkedList;

    return 0;
}