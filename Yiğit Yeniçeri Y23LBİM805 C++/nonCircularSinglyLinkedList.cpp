#include "nonCircularSinglyLinkedList.hpp"

#include <iostream>

nonCircularSinglyLinkedList::nonCircularSinglyLinkedList() : head(nullptr) {}

nonCircularSinglyLinkedList::~nonCircularSinglyLinkedList() {
    deleteList();
}

void nonCircularSinglyLinkedList::deleteList() {
    NonCircularSinglyNode* current = head;
    while (current != nullptr) {
        NonCircularSinglyNode* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

bool nonCircularSinglyLinkedList::addNode(std::string n) {
    if (searchList(n)) {
        return false;
    }

    NonCircularSinglyNode* newNode = new  NonCircularSinglyNode(n);
    if (head == nullptr || head->info > n) {
        newNode->next = head;
        head = newNode;
        return true;
    }

    NonCircularSinglyNode* current = head;
    while (current->next != nullptr && current->next->info < n) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    return true;
}

bool nonCircularSinglyLinkedList::deleteNode(std::string n) {
    if (head == nullptr) {
        return false;
    }

    if (head->info == n) {
        NonCircularSinglyNode* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    NonCircularSinglyNode* current = head;
    while (current->next != nullptr && current->next->info != n) {
        current = current->next;
    }

    if (current->next == nullptr) {
        return false;
    }

    NonCircularSinglyNode* temp = current->next;
    current->next = current->next->next;
    delete temp;
    return true;
}

void nonCircularSinglyLinkedList::printList() const {
    NonCircularSinglyNode* current = head;
    while (current != nullptr) {
        std::cout << current->info << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

bool nonCircularSinglyLinkedList::searchList(std::string n) const {
    NonCircularSinglyNode* current = head;
    while (current != nullptr) {
        if (current->info == n) {
            return true;
        }
        current = current->next;
    }
    return false;
}

