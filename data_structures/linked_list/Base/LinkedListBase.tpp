#include "iostream"

using namespace std;

template<typename T>
LinkedListBase<T>::LinkedListBase(): head(nullptr) {
    cout << "The constructor of LinkedListBase class is called\n";
}

template<typename T>
LinkedListBase<T>::~LinkedListBase() {
    cout << "The destructor of Linked List Base class is called\n";

    Node<T>* currentNode = this->head;

    while(true)
    {
        if (currentNode->nextNode != nullptr) {
            cout << "Releasing memory of an element..." << endl;
            this->head = currentNode->nextNode;
            delete currentNode;

            currentNode = this->head;
            this->head = currentNode->nextNode;
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
auto LinkedListBase<T>::getHeadNode() {
    return head;
}

//O(1)
template<typename T>
bool LinkedListBase<T>::remove(Node<T> *node) {
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

//O(n)
template<typename T>
bool LinkedListBase<T>::remove(T val) {
    auto nodeToRemove = findNode(val);
    if(nodeToRemove != nullptr)
        return remove(nodeToRemove);

    return false;
}

//O(n)
template<typename T>
Node<T>* LinkedListBase<T>::findNode(T val) {
    auto currentNode = head;
    while(currentNode != nullptr){
        if (currentNode->data == val)
            return currentNode;
        else
            currentNode = currentNode->nextNode;
    }

    return nullptr;
}

template<typename T>
bool LinkedListBase<T>::isEmpty() const {
    return this->head == nullptr;
}

template<typename T>
bool LinkedListBase<T>::removeHead() {
    auto staleHead = head;
    head = head->nextNode;

    delete staleHead;

    return true;
}