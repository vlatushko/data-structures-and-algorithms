#include <iostream>

template<typename T>
Node<T>::Node(T d, Node<T> *n) {
    data = d;
    nextRef = n;
}