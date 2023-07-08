//
// Created by vasyl on 5/14/2023.
//

#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main(){
    auto* linkedList = new SinglyLinkedList<int>();

    //testing if removal fails when the list is empty
    linkedList->remove(new Node<int>{0, nullptr});

    auto appendedNode1 = linkedList->append(3);

    linkedList->remove(appendedNode1);

    auto pushedNode1 = linkedList->push(1);
    auto pushedNode2 = linkedList->push(2);
    auto pushedNode3 = linkedList->push(3);
    auto pushedNode4 = linkedList->push(4);
    auto appendedNode2 = linkedList->append(7);

    linkedList->remove(pushedNode3);

    //trying to find a node
    auto foundNode = linkedList->findNode(4); //existing
    auto notFoundNode = linkedList->findNode(3); //removed before

    cout << "Trying to remove non-existent node with value of 3: " << linkedList->remove(3) << endl;
    cout << "Trying to remove existing node with value of 4: " << linkedList->remove(4) << endl;

    linkedList->traverse([](Node<int>* node){
        cout << "item: " << node->data << " at address: " << node << endl;
    });

    delete linkedList;

    return 0;
}