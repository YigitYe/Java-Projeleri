#include <iostream>
#include "nonCircularSinglyLinkedList.hpp"
#include "circularSinglyLinkedList.hpp"
#include "nonCircularDoublyLinkedList.hpp"
#include "circularDoublyLinkedList.hpp"

using namespace std;

int main() {
    //non c˝rcular s˝ngly
    cout << "non circular singly linked:" << endl;
    nonCircularSinglyLinkedList ncsl;
    ncsl.addNode("elma");
    ncsl.addNode("armut");
    ncsl.printList();

    ncsl.deleteNode("elma");
    ncsl.printList();

    cout << (ncsl.searchList("elma") ? "Found" : "Not Found") << endl;


    ncsl.deleteList();
    ncsl.printList();

    // circular s˝ngly
    cout << "circular singly linked:" << endl;
    circularSinglyLinkedList csl;
    csl.addNode("elma");
    csl.addNode("armut");
    csl.addNode("muz");
    csl.printList();

    csl.deleteNode("armut");
    csl.printList();

    cout << (csl.searchList("elma") ? "Found" : "Not Found") << endl;
    cout << (csl.searchList("armut") ? "Found" : "Not Found") << endl;

    csl.deleteList();
    csl.printList();

    // non circular doubly
    cout << "non circular doubly linked:" << endl;
    nonCircularDoublyLinkedList ncdl;
    ncdl.addNode("elma");
    ncdl.addNode("armut");
    ncdl.addNode("muz");
    ncdl.printList();

    ncdl.deleteNode("muz");
    ncdl.printList();

    cout << (ncdl.searchList("armut") ? "Found" : "Not Found") << endl;
    cout << (ncdl.searchList("muz") ? "Found" : "Not Found") << endl;

    ncdl.deleteList();
    ncdl.printList();

    //circular dobuly linked
    cout << "circular doubly linked:" << endl;
    circularDoublyLinkedList cdl;
    cdl.addNode("elma");
    cdl.addNode("armut");
    cdl.addNode("muz");
    cdl.printList();
    cdl.deleteNode("muz");
    cdl.printList();
    cout << (cdl.searchList("elma") ? "Found" : "Not Found") << endl;
    cout << (cdl.searchList("muz") ? "Found" : "Not Found") << endl;
    cdl.deleteList();
    cdl.printList();
    return 0;
}
