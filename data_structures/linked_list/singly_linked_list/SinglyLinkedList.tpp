#include <iostream>

using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head(nullptr) {}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    cout << "Calling the destructor of the Singly Linked List..." << endl;
    Node<T>* currentNode = head;

    while(true)
    {
        if (currentNode->nextNode != nullptr) {
            cout << "Releasing memory of an element..." << endl;
            head = currentNode->nextNode;
            delete currentNode;

            currentNode = head;
            head = currentNode->nextNode;
        }
        else
        {
            cout << "Releasing memory of the last element..." << endl;
            delete currentNode;
            break;
        }
    }
}

template<typename T>
auto SinglyLinkedList<T>::getHeadNode() {
    return head;
}

template<typename T>
Node<T>* SinglyLinkedList<T>::push(T data) {
    if (isEmpty()) {
        head = new Node<T>{data, nullptr};

        return head;
    }

    auto newNode = new Node<T>{data, head};
    head = newNode;

    return newNode;
}

//O(n)
template<typename T>
Node<T>* SinglyLinkedList<T>::append(T data) {
    if (isEmpty())
        return push(data);

    auto newNode = new Node<T>{data, nullptr};
    auto nextNode = head;
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
    auto next = head;
    while(next != nullptr){
        func_ptr(next);
        next = next->nextNode;
    }
}

//O(1)
template<typename T>
bool SinglyLinkedList<T>::remove(Node<T> *node) {
    if (isEmpty())
        return false;

    if (node == head)
        return removeHead();

    auto currentNode = head;
    while(currentNode->nextNode != nullptr){
        if (currentNode->nextNode == node){
            auto nodeToRemove = currentNode->nextNode;
            currentNode->nextNode = nodeToRemove->nextNode;

            delete nodeToRemove;

            return true;
        }
        else
            currentNode = currentNode->nextNode;
    }

    return false;
}

template<typename T>
bool SinglyLinkedList<T>::removeHead() {
    auto staleHead = head;
    head = head->nextNode;

    delete staleHead;

    return true;
}

//O(n)
template<typename T>
bool SinglyLinkedList<T>::remove(T val) {
    auto nodeToRemove = findNode(val);
    if(nodeToRemove != nullptr)
        return remove(nodeToRemove);

    return false;
}

template<typename T>
bool SinglyLinkedList<T>::isEmpty() const {
    return this->head == nullptr;
}

//O(n)
template<typename T>
Node<T>* SinglyLinkedList<T>::findNode(T val) {
    auto currentNode = head;
    while(currentNode != nullptr){
        if (currentNode->data == val)
            return currentNode;
        else
            currentNode = currentNode->nextNode;
    }

    return nullptr;
}