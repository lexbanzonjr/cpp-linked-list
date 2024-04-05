#include "Node.h"

template <typename T>
Node<T>::Node<T>(T AData)
    : NextNode(nullptr),
      PrevNode(nullptr),
      DataA(Data)
{
}

template <typename T>
T* Node<T>::GetData() const
{
    return Data;
}

template <typename T>
Node<T>* Node<T>::GetNextNode() const
{
    return NextNode;
}

template <typename T>
Node<T>* Node<T>::GetPrevNode() const
{
    return PrevNode;
}

template <typename T>
void Node<T>::Print()
{
    DoPrint();
}

template <typename T>
void Node<T>::SetNextNode(Node<T>* ANode) {
    NextNode = ANode;
}

template <typename T>
void Node<T>::SetPrevNode(Node<T>* ANode) {
    PrevNode = ANode;
}