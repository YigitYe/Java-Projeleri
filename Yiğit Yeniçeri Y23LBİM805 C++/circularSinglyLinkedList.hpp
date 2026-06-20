

// circularSinglyLinkedList.hpp
#ifndef CIRCULARSINGLYLINKEDLIST_HPP
#define CIRCULARSINGLYLINKEDLIST_HPP

#include <string>

struct circularSinglyNode {
    std::string info;
    circularSinglyNode* next;
    
    circularSinglyNode() : info(""), next(nullptr) {}
    circularSinglyNode(std::string val) : info(val), next(nullptr) {}
};

class circularSinglyLinkedList {
private:
    circularSinglyNode* head;
    
public:
    circularSinglyLinkedList();
    ~circularSinglyLinkedList();
    
    bool addNode(std::string n);
    bool deleteNode(std::string n);
    void printList() const;
    bool searchList(std::string n) const;
    void deleteList();
};

#endif // CIRCULARSINGLYLINKEDLIST_HPP
