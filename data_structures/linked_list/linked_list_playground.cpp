//
// Created by vasyl on 5/14/2023.
//

#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main(){
    auto* linkedList = new SinglyLinkedList<int>();

    linkedList->append(3);
    linkedList->push(1);
    linkedList->push(2);
    linkedList->push(3);
    linkedList->push(4);
    linkedList->append(7);

    linkedList->traverse([](Node<int>* node){
        cout << "item: " << node->data << " at address: " << node << endl;
    });

    cout << "after removal" << endl << endl;

    linkedList->traverse([](Node<int>* node){
        cout << "item: " << node->data << " at address: " << node << endl;
    });

    delete linkedList;

    return 0;
}