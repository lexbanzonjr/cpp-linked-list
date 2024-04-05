#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(Node* AHead, Node* ATail)
    : Head(AHead),
      Tail(ATail)
{
    Head->SetNextNode(Tail);
    Tail->SetPrevNode(Head);
}

void LinkedList::Add(Node* ANode)
{
    Node* last = Tail->GetPrevNode();
    Tail->SetPrevNode(ANode);
    ANode->SetNextNode(Tail);
    last->SetNextNode(ANode);
    ANode->SetPrevNode(last);
}

void LinkedList::Print() 
{
    Node* node = Head->GetNextNode();
    while (nullptr != node)
    {
        node->Print();
        node = node->GetNextNode();
    }
}
