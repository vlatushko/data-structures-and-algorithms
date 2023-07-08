template<typename T>
Node<T>::Node(T data, Node<T> *nextNode) {
    this->data = data;
    this->nextNode = nextNode;
}