

#include "circularDoublyLinkedList.hpp"

#include <iostream>

circularDoublyLinkedList::circularDoublyLinkedList() : head(nullptr) {}

circularDoublyLinkedList::~circularDoublyLinkedList() {
    deleteList();
}

void circularDoublyLinkedList::deleteList() {
    if (head == nullptr) {
        return;
    }

    circularDoublyNode* current = head;
    do {
        circularDoublyNode* next = current->next;
        delete current;
        current = next;
    } while (current != head);

    head = nullptr;
}

bool circularDoublyLinkedList::addNode(std::string n) {
    if (searchList(n)) {
        return false;
    }

    circularDoublyNode* newNode = new circularDoublyNode(n);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        head->prev = head;
        return true;
    }

    if (head->info > n) {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode;
        return true;
    }

    circularDoublyNode* current = head;
    while (current->next != head && current->next->info < n) {
        current = current->next;
    }
    newNode->next = current->next;
    newNode->prev = current;
    current->next->prev = newNode;
    current->next = newNode;
    return true;
}

bool circularDoublyLinkedList::deleteNode(std::string n) {
    if (head == nullptr) {
        return false;
    }

    if (head->info == n) {
        if (head->next == head) {
            delete head;
            head = nullptr;
            return true;
        } else {
            circularDoublyNode* temp = head;
            head->prev->next = head->next;
            head->next->prev = head->prev;
            head = head->next;
            delete temp;
            return true;
        }
    }

    circularDoublyNode* current = head;
    while (current->next != head && current->next->info != n) {
        current = current->next;
    }

    if (current->next == head) {
        return false;
    }

    circularDoublyNode* temp = current->next;
    current->next = current->next->next;
    current->next->prev = current;
    delete temp;
    return true;
}

void circularDoublyLinkedList::printList() const {
    if (head == nullptr) {
        return;
    }

    circularDoublyNode* current = head;
    do {
        std::cout << current->info << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}

bool circularDoublyLinkedList::searchList(std::string n) const {
    if (head == nullptr) {
        return false;
    }

    circularDoublyNode* current = head;
    do {
        if (current->info == n) {
            return true;
        }
        current = current->next;
    } while (current != head);
    return false;
}

