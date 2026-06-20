

// nonCircularDoublyLinkedList.hpp
#ifndef NONCIRCULARDOUBLYLINKEDLIST_HPP
#define NONCIRCULARDOUBLYLINKEDLIST_HPP

#include <string>

struct nonCircularDoublyNode {
    std::string info;
    nonCircularDoublyNode* next;
    nonCircularDoublyNode* prev;
    
    nonCircularDoublyNode() : info(""), next(nullptr), prev(nullptr) {}
    nonCircularDoublyNode(std::string val) : info(val), next(nullptr), prev(nullptr) {}
};

class nonCircularDoublyLinkedList {
private:
    nonCircularDoublyNode* head;
    
public:
    nonCircularDoublyLinkedList();
    ~nonCircularDoublyLinkedList();
    
    bool addNode(std::string n);
    bool deleteNode(std::string n);
    void printList() const;
    bool searchList(std::string n) const;
    void deleteList();
};

#endif // NONCIRCULARDOUBLYLINKEDLIST_HPP
