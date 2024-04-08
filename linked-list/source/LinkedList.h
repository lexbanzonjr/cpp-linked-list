#pragma once
#ifndef LINKEDLIST
#define LINKEDLIST

#include <exception>
#include "Node.h"

template <typename T>
class LinkedList
{
private:
    typedef T data_type;
    typedef T* data_ptr;
    typedef Node<T> node_type;

private:
    node_type* Head;
    node_type* Tail;
    unsigned int Count;

protected:
    LinkedList()
        : Head(new node_type(new data_type())),
          Tail(new node_type(new data_type())),
          Count(0)
    {
        Head->SetNextNode(Tail);
        Tail->SetPrevNode(Head);
    }

    ~LinkedList()
    {
        node_type* node = Head;
        node_type* nextNode = node->GetNextNode();
        while (true)
        {
            delete node;
            node = nextNode;
            if (nullptr == node)
                break;
            nextNode = nextNode->GetNextNode();
        }
    }

public:
    void Add(data_ptr Data) {
        node_type* newNode = new node_type(Data);
        node_type* last = Tail->GetPrevNode();
        Tail->SetPrevNode(newNode);
        last->SetNextNode(newNode);

        newNode->SetNextNode(Tail);
        newNode->SetPrevNode(last);
        ++Count;
    }

    data_ptr Get(unsigned int Index)
    {
        if (Index > Count)
            throw std::exception("Index out of bounds");

        node_type* node = Head->GetNextNode();
        for (unsigned int i = 0; i < Index; ++i)
            node = node->GetNextNode();

        return node->GetData();
    }

    unsigned int GetCount()
    {
        return Count;
    }

    void Remove(unsigned int Index)
    {
        if (Index > Count)
            throw std::exception("Index out of bounds");

        node_type* node = Head->GetNextNode();
        for (unsigned int i = 0; i < Index; ++i)
            node = node->GetNextNode();

        node_type* prevNode = node->GetPrevNode();
        node_type* nextNode = node->GetNextNode();

        nextNode->SetPrevNode(prevNode);
        prevNode->SetNextNode(nextNode);

        delete node;
        --Count;
    }
};

#endif  // #ifndef LINKEDLIST
