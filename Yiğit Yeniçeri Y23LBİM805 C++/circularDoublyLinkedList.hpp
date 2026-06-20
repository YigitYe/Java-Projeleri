

// circularDoublyLinkedList.hpp
#ifndef CIRCULARDOUBLYLINKEDLIST_HPP
#define CIRCULARDOUBLYLINKEDLIST_HPP

#include <string>

struct circularDoublyNode {
    std::string info;
    circularDoublyNode* next;
    circularDoublyNode* prev;
    
    circularDoublyNode() : info(""), next(nullptr), prev(nullptr) {}
    circularDoublyNode(std::string val) : info(val), next(nullptr), prev(nullptr) {}
};

class circularDoublyLinkedList {
private:
    circularDoublyNode* head;
    
public:
    circularDoublyLinkedList();
    ~circularDoublyLinkedList();
    
    bool addNode(std::string n);
    bool deleteNode(std::string n);
    void printList() const;
    bool searchList(std::string n) const;
    void deleteList();
};

#endif // CIRCULARDOUBLYLINKEDLIST_HPP
