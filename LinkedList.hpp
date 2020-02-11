#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList
{
private:
    
    int count;
    Node* head;

public:
    LinkedList();
    void addFront(int payload);
};
#endif /* LinkedList_hpp */