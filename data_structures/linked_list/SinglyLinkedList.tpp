#include <iostream>

using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : LinkedListBase<T>() {
    cout << "The constructor of the Singly Linked List class is called\n";
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList(){
    cout << "Calling the destructor of the Singly Linked List..." << endl;
}

template<typename T>
Node<T>* SinglyLinkedList<T>::push(T data) {
    if (this->isEmpty()) {
        this->head = new Node<T>{data, nullptr};

        return this->head;
    }

    auto newNode = new Node<T>{data, this->head};
    this->head = newNode;

    return newNode;
}

//O(n)
template<typename T>
Node<T>* SinglyLinkedList<T>::append(T data) {
    if (this->isEmpty())
        return push(data);

    auto newNode = new Node<T>{data, nullptr};
    auto nextNode = this->head;
    while(nextNode != nullptr){
        if (nextNode->nextNode == nullptr) {
            nextNode->nextNode = newNode;
            break;
        } else
            nextNode = nextNode->nextNode;
    }

    return newNode;
}

template<typename T>
void SinglyLinkedList<T>::traverse(void (*func_ptr)(Node<T>*)) {
    auto next = this->head;
    while(next != nullptr){
        func_ptr(next);
        next = next->nextNode;
    }
}