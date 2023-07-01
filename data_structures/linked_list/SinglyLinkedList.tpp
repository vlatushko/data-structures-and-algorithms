using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head(nullptr), tail(nullptr) {}

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
void SinglyLinkedList<T>::push(T data) {
    if (head == nullptr) {
        head = new Node<T>{data, nullptr};
        tail = head;

        return;
    }

    auto newNode = new Node<T>{data, head};
    head = newNode;
}

template<typename T>
void SinglyLinkedList<T>::append(T data) {
    if (head == nullptr){
        push(data);

        return;
    }

    auto newNode = new Node<T>{data, nullptr};
    tail->nextRef = newNode;
    tail = newNode;
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
    if (head == nullptr)
        return false;

    if (head == node)
    {
        head = head->nextRef;
        delete node;

        return true;
    }

    auto current_node = head;

    do
    {
        if (current_node->nextRef == tail && node == tail)
        {
            tail = current_node;
            tail->nextRef = nullptr;

            delete node;

            return true;
        }

        if(current_node == node)
        {
            current_node->nextRef = node->nextRef;

            delete node;

            return true;
        }

        current_node = current_node->nextRef;
    }
    while(current_node != nullptr);

    return false;
}