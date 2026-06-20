#include "circularSinglyLinkedList.hpp"

#include <iostream>

circularSinglyLinkedList::circularSinglyLinkedList() : head(nullptr) {}

circularSinglyLinkedList::~circularSinglyLinkedList() {
    deleteList();
}

void circularSinglyLinkedList::deleteList() {
    if (head == nullptr) {
        return;
    }

    circularSinglyNode* current = head;
    do {
        circularSinglyNode* next = current->next;
        delete current;
        current = next;
    } while (current != head);

    head = nullptr;
}

bool circularSinglyLinkedList::addNode(std::string n) {
    if (searchList(n)) {
        return false;
    }

    circularSinglyNode* newNode = new circularSinglyNode(n);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        return true;
    }

    if (head->info > n) {
        newNode->next = head;
        circularSinglyNode* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        head = newNode;
        return true;
    }

    circularSinglyNode* current = head;
    while (current->next != head && current->next->info < n) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    return true;
}

bool circularSinglyLinkedList::deleteNode(std::string n) {
    if (head == nullptr) {
        return false;
    }

    if (head->info == n) {
        if (head->next == head) {
            delete head;
            head = nullptr;
            return true;
        } else {
            circularSinglyNode* current = head;
            while (current->next != head) {
                current = current->next;
            }
            circularSinglyNode* temp = head;
            current->next = head->next;
            head = head->next;
            delete temp;
            return true;
        }
    }

    circularSinglyNode* current = head;
    while (current->next != head && current->next->info != n) {
        current = current->next;
    }

    if (current->next == head) {
        return false;
    }

    circularSinglyNode* temp = current->next;
    current->next = current->next->next;
    delete temp;
    return true;
}

void circularSinglyLinkedList::printList() const {
    if (head == nullptr) {
        return;
    }

    circularSinglyNode* current = head;
    do {
        std::cout << current->info << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}

bool circularSinglyLinkedList::searchList(std::string n) const {
    if (head == nullptr) {
        return false;
    }

    circularSinglyNode* current = head;
    do {
        if (current->info == n) {
            return true;
        }
        current = current->next;
    } while (current != head);
    return false;
}


