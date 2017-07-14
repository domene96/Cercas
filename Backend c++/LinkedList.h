#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"

template <class T>
class LinkedList {
    public:
        LinkedList ();
        LinkedList (const LinkedList &l);
        ~LinkedList ();
        bool isEmpty ();
        int getSize ();
        void addFirst (T data);
        void addLast (T data);
        T deleteFirst ();
        T deleteLast ();
        int deleteAll ();
        T get (int iPos);
        T set (T data, int iPos);
        bool change (int iPos, int iPos2);
        bool operator== (const LinkedList<T> &l);
        void operator+= (T data);
        void operator+= (const LinkedList<T> &l);
        void operator= (const LinkedList<T> &l);
        void print ();
    private:
        Node<T> *head;
        int size;
        void borraTodo();
};

template <typename T>
void LinkedList<T>::borraTodo () {
    Node<T> *aux = head;
    while (head != NULL) {
        head = head->getNext ();
        delete aux;
        aux = head;
    }
    size = 0;
}

template <typename T>
LinkedList<T>::LinkedList () {
    head = NULL;
    size = 0;
}

template <typename T>
LinkedList<T>::LinkedList (const LinkedList &l) {
    this->size = l.size;
    Node<T> *aux = l.head, *aux2;

    this->addFirst (aux->getData ());
    aux2 = this->head;

    aux = aux->getNext ();
    while (aux != NULL) {
        aux2->setNext (new Node<T>(aux->getData()));
        aux = aux->getNext ();
        aux2 = aux2->getNext ();
    }
}

template<typename T>
LinkedList<T>::~LinkedList () {
    borraTodo ();
}

template <typename T>
bool LinkedList<T>::isEmpty () {
    return (this->head == NULL);
}

template <typename T>
int LinkedList<T>::getSize () {
    return this->size;
}

template <typename T>
void LinkedList<T>::addFirst (T data) {
    head = new Node<T> (data, head);
    size++;
}

template <typename T>
void LinkedList<T>::addLast (T data) {
    if (this->isEmpty ()) {
        this->addFirst (data);
    } else {
        Node<T> *aux = this->head;
        while (aux->getNext () != NULL) {
            aux = aux->getNext ();
        }

        aux->setNext (new Node<T> (data));
        this->size++;
    }
}

template <typename T>
T LinkedList<T>::deleteFirst () {
    if (isEmpty ()) {
        return NULL;
    }
    Node<T> *aux = head;
    head = head->getNext ();
    T dataAux = aux->getDato;
    delete aux;
    size--;
    return dataAux;
}

template <typename T>
T LinkedList<T>::deleteLast () {
    if (size <= 1) {
       return  deleteFirst ();
    }

    Node<T> *aux = head;
    while (aux->getNext ()->getNext () != NULL) {
        aux = aux->getNext ();
    }
    T dataAux = aux->getNext ()->getDato ();
    delete aux->getNext ();
    aux->setNext (NULL);
    size--;
    return dataAux;
}

template <typename T>
int LinkedList<T>::deleteAll () {
    borraTodo ();
    int iCant = size;
    size = 0;
    return iCant;
}

template <typename T>
T LinkedList<T>::get (int iPos) {
    if (iPos >= size || iPos < 0) {
        return NULL;
    }

    Node<T> *aux = head;
    for (int iA =0; iA<iPos; iA++) {
        aux = aux->getNext ();
    }

    return aux->getData ();
}

template <typename T>
T LinkedList<T>::set (T data, int iPos) {
    if (iPos >= size|| iPos < 0) {
        return NULL;
    }

    Node<T> *aux = head;
    for (int iA=0; iA<iPos; iA++) {
        aux = aux->getNext ();
    }

    T dataAux = aux->getData ();
    aux->setData (data);

    return dataAux;
}

template <typename T>
bool LinkedList<T>::change (int iPos, int iPos2) {
    if ((iPos > size ) || (iPos2 > size)) {
        return false;
    }
    if (iPos == iPos2) {
        return true;
    }

    int iMay = (iPos > iPos2) ? iPos : iPos2;
    int iMen = (iPos < iPos2) ? iPos : iPos2;

    Node<T> *aux = head;

    for (int iA=0; iA<iMen; iA++) {
        aux = aux->getNext ();
    }

    Node<T> *aux2 = aux;

    for (int iA=iMen+1; iA<iMay; iA++) {
        aux2 = aux2->getNext ();
    }

    T dataAux = aux->getData ();
    aux->setData (aux2->getData ());
    aux2->setData (dataAux);

    return true;
}

template <typename T>
bool LinkedList<T>::operator== (const LinkedList<T> &l) {
    if (this->size != l.size) {
        return false;
    } else {
        Node<T> *aux = this->head;
        Node<T> *aux2 = l.head;

        for (int i = 0; i<this->size; i++) {
            if (aux->getData () != aux2->getData ()) {
                return false;
            }
            aux = aux->getNext ();
            aux2 = aux2->getNext ();
        }

        return true;
    }
}

template <typename T>
void LinkedList<T>::operator+= (T data) {
    if (this->isEmpty ()) {
        this->addFirst (data);
    } else {
        Node<T> *aux = this->head;
        while (aux->getNext () != NULL) {
            aux = aux->getNext ();
        }

        aux->setNext (new Node<T> (data));
        this->size++;
    }
}

template <typename T>
void LinkedList<T>::operator+= (const LinkedList<T> &l) {
   Node<T> *aux, *aux2 = l.head;

    if (l.head == NULL) {
        return;
    }
    if (this->isEmpty ()) {
        this->addFirst (aux2->getData ());
        aux = this->head;

        aux2 = aux2->getNext ();

        while (aux2 != NULL) {
            aux->setNext (new Node<T> (aux2->getData ()));
            aux2 = aux2->getNext ();
            aux = aux->getNext ();
            this->size++;
        }
    } else {
        aux = this->head;
        while (aux->getNext () != NULL) {
            aux = aux->getNext ();
        }

        while (aux2 != NULL) {
            aux->setNext (new Node<T> (aux2->getData ()));
            aux2 = aux2->getNext ();
            aux = aux->getNext ();
            this->size++;
        }
    }
}

template <typename T>
void LinkedList<T>::operator= (const LinkedList<T> &l) {
    this->borraTodo ();

    this->size = l.size;
    Node<T> *aux = l.head, *aux2;

    this->addFirst (aux->getData ());
    aux2 = this->head;

    aux = aux->getNext ();
    while (aux != NULL) {
        aux2->setNext (new Node<T> (aux->getData ()));
        aux = aux->getNext ();
        aux2 = aux2->getNext ();
    }
}

template <typename T>
void LinkedList<T>::print () {
    Node<T> *aux = head;
    while (aux != NULL) {
        cout << aux->getData () << " ";
        aux = aux->getNext ();
    }
}

#endif
