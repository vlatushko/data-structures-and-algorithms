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

    linkedList->traverse([](Node<int>* node){
        cout << "item: " << node->data << " at address: " << node << endl;
    });

    delete linkedList;

    return 0;
}