#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    this->count = 0;
}
LinkedList::addFront(int payload)
{
    this->count = count + 1;
    this->payload = payload;
}