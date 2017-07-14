#ifndef Node_h
#define Node_h

template <class T>
class Node {
    public:
        Node (T data);
        Node (T data, Node<T>* next);
        T getData ();
        Node<T>* getNext ();
        void setData (T data);
        void setNext (Node<T> *next);
    private:
        T data;
        Node<T> *next;
};

template <typename T>
Node<T>::Node (T data) {
    this->data = data;
    this->next = NULL;
}

template <typename T>
Node<T>::Node (T data, Node<T>* next) {
    this->data = data;
    this->next = next;
}

template <typename T>
T Node<T>::getData () {
    return this->data;
}

template <typename T>
Node<T>* Node<T>::getNext () {
    return this->next;
}

template <typename T>
void Node<T>::setData (T data) {
    this->data = data;
}

template <typename T>
void Node<T>::setNext (Node<T> *next) {
    this->next = next;
}

#endif
