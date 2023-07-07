using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head(nullptr) {}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
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
auto SinglyLinkedList<T>::get_head_node() {
    return head;
}

template<typename T>
Node<T>* SinglyLinkedList<T>::push(T data) {
    if (is_empty()) {
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
    if (is_empty())
        return push(data);

    auto newNode = new Node<T>{data, nullptr};
    auto nextNode = head;
    while(nextNode != nullptr){
        if (nextNode->nextRef == nullptr) {
            nextNode->nextRef = newNode;
            break;
        } else
            nextNode = nextNode->nextRef;
    }

    return newNode;
}

template<typename T>
void SinglyLinkedList<T>::traverse(void (*func_ptr)(Node<T>*)) {
    auto next = head;
    while(true){
        func_ptr(next);
        next = next->nextRef;

        if (next == nullptr)
            break;
    }
}

template<typename T>
bool SinglyLinkedList<T>::remove(Node<T> *node) {
    if (is_empty())
        return false;

    if (node == head){
        auto staleHead = head;
        head = head->nextRef;

        delete staleHead;

        return true;
    }

    auto nextNode = head;
    while(nextNode->nextRef != nullptr){
        if (nextNode->nextRef == node){
            auto nodeToRemove = nextNode->nextRef;
            nextNode->nextRef = nodeToRemove->nextRef;

            delete nodeToRemove;

            return true;
        }
        else
            nextNode = nextNode->nextRef;
    }

    return false;
}

template<typename T>
bool SinglyLinkedList<T>::remove(T val) {
    //remove by value
    return false;
}

template<typename T>
bool SinglyLinkedList<T>::is_empty() const {
    return this->head == nullptr;
}

template<typename T>
Node<T>* find_node(T val) {
    throw std::logic_error("Function is not implemented");
}