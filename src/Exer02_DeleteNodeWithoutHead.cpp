#include <iostream>
#include "LinkedList.h"

void removeNode(Node<int>* p) {
    if (p == nullptr || p->next == nullptr) {
        return;
    }
    Node<int>* nextNode = p->next;
    p->element = nextNode -> element;
    p->next = nextNode->next;
    delete nextNode;
}

int main() {
    Node<int>* head = new Node<int>(20);
    head->next = new Node<int>(4);
    head->next->next = new Node<int>(5);
    head->next->next->next = new Node<int>(19);
    head->next->next->next->next = new Node<int>(47);
    Node<int>* p = head->next->next;
    std::cout << "Proximo de p: " << p->next->element << "\n";
    removeNode(p);

   Node<int>* current = head;
    while (current != nullptr) {
        std::cout << current->element << " ";
        current = current->next;
    }

    std::cout << "\n";
    current = head;

    while (current != nullptr) {
        Node<int>* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    std::cout << "\n";

    return 0;
}