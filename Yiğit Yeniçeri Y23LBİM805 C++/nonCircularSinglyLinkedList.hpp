// nonCircularSinglyLinkedList.hpp
#ifndef NONCIRCULARSINGLYLINKEDLIST_HPP
#define NONCIRCULARSINGLYLINKEDLIST_HPP

#include <string>

struct NonCircularSinglyNode {
    std::string info;
    NonCircularSinglyNode* next;
    
    NonCircularSinglyNode() : info(""), next(nullptr) {}
    NonCircularSinglyNode(std::string val) : info(val), next(nullptr) {}
};

class nonCircularSinglyLinkedList {
private:
    NonCircularSinglyNode* head;
    
public:
    nonCircularSinglyLinkedList();
    ~nonCircularSinglyLinkedList();
    
    bool addNode(std::string n);
    bool deleteNode(std::string n);
    void printList() const;
    bool searchList(std::string n) const;
    void deleteList();
};

#endif // NONCIRCULARSINGLYLINKEDLIST_HPP

