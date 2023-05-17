using namespace std;

template<typename T>
LinkedList<T>::LinkedList(Node<T>* headNode) : head(headNode), tail(headNode) {}

template<typename T>
LinkedList<T>::~LinkedList() {
    cout << "Calling the destructor of the Linked List..." << endl;
    Node<T>* currentNode = head;

    while(true)
    {
        if (currentNode->nextRef != nullptr) {
            cout << "Releasing memory of an element..." << endl;
            head = currentNode->nextRef;
            delete currentNode;

            currentNode = head;
            head = currentNode->nextRef;
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
auto LinkedList<T>::getHeadNode() {
    return head;
}

template<typename T>
auto LinkedList<T>::getTailNode() {
    //TODO: Implement the tail node feature
    return tail;
}

template<typename T>
void LinkedList<T>::addNode(T data) {
    auto newNode = new Node<int>{data, head};
    head = newNode;
}