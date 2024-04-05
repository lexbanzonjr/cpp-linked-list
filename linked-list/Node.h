#pragma once
#ifndef NODE
#define NODE

template <typename T>
class Node
{
private:
    typedef T type;
    typedef T* ptr_type;

private:
    ptr_type Data;
    Node* NextNode;
    Node* PrevNode;

public:
    Node(ptr_type AData)
        : Data(AData),
        NextNode(nullptr),
        PrevNode(nullptr)
    {
    }

    ~Node()
    {
        delete Data;
    }

    ptr_type GetData() const
    {
        return Data;
    }


    Node* GetNextNode() const
    {
        return NextNode;
    }

    Node* GetPrevNode() const
    {
        return PrevNode;
    }

    void SetNextNode(Node* ANode)
    {
        NextNode = ANode;
    }

    void SetPrevNode(Node* ANode)
    {
        PrevNode = ANode;
    }
};

#endif // #ifndef NODE