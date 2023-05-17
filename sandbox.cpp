//
// Created by vasyl on 5/17/2023.
//

#include "iostream"

using namespace std;

int main(){
    int* node1 = new int(1);
    int* node2 = node1;

    cout << "node1: " << *node1 << endl;
    cout << "node2: " << *node2 << endl;

    cout << "updating the value..." << endl;

    *node2 = 2;

    cout << "node1: " << *node1 << endl;
    cout << "node2: " << *node2 << endl;

    return 0;
}