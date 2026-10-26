#include <iostream>
#include "LinkedList.h"


Node<int>* mergeTwoLists(Node<int>* list1, Node<int>* list2) {
    if (list1 == nullptr) {
        return list2;

    }

    if ( list2 == nullptr) {
        return list1;
    }

    Node<int>* head = nullptr;

    if (list1-> element <= list2 -> element) {
        head = list1;
        list1 = list1->next;
    } else {
        head = list2;
        list2 = list2->next;
    }

    Node<int>* tail = head;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->element <= list2->element) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }
    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return head;

}

int main() {
    Node<int>* list1 = new Node<int>(1);
    list1->next = new Node<int>(3);
    list1->next->next = new Node<int>(5);
    list1->next->next->next = new Node<int>(7);

    Node<int>* list2 = new Node<int>(2);
    list2-> next = new Node<int>(4);
    list2->next->next = new Node<int>(6);
    list2->next->next->next = new Node<int>(8);

    Node<int>* head = mergeTwoLists(list1, list2);

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
    return 0;
}