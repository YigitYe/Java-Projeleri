
#include "nonCircularDoublyLinkedList.hpp"
#include <iostream>

nonCircularDoublyLinkedList::nonCircularDoublyLinkedList() : head(nullptr) {}

nonCircularDoublyLinkedList::~nonCircularDoublyLinkedList() {
    deleteList();
}

void nonCircularDoublyLinkedList::deleteList() {
    nonCircularDoublyNode* current = head;
    while (current != nullptr) {
        nonCircularDoublyNode* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

bool nonCircularDoublyLinkedList::addNode(std::string n) {
    if (searchList(n)) {
        return false;
    }

    nonCircularDoublyNode* newNode = new nonCircularDoublyNode(n);
    if (head == nullptr) {
        head = newNode;
        return true;
    }

    if (head->info > n) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return true;
    }

    nonCircularDoublyNode* current = head;
    while (current->next != nullptr && current->next->info < n) {
        current = current->next;
    }
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    return true;
}

bool nonCircularDoublyLinkedList::deleteNode(std::string n) {
    if (head == nullptr) {
        return false;
    }

    if (head->info == n) {
        nonCircularDoublyNode* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return true;
    }

    nonCircularDoublyNode* current = head;
    while (current != nullptr && current->info != n) {
        current = current->next;
    }

    if (current == nullptr) {
        return false;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    }
    if (current->prev != nullptr) {
        current->prev->next = current->next;
    }
    delete current;
    return true;
}

void nonCircularDoublyLinkedList::printList() const {
    nonCircularDoublyNode* current = head;
    while (current != nullptr) {
        std::cout << current->info << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

bool nonCircularDoublyLinkedList::searchList(std::string n) const {
    nonCircularDoublyNode* current = head;
    while (current != nullptr) {
        if (current->info == n) {
            return true;
        }
        current = current->next;
    }
    return false;
}

