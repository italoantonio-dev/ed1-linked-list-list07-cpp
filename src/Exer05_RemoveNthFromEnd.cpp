#include <iostream>
#include "LinkedList.h"


Node<int>* removeNthFromEnd(Node<int>* head, int n) {
    if (head == nullptr || n <=0) {
        return head;
    }

    Node<int>* fast = head;
    Node<int>* slow = head;

    for (int i = 0; i< n; i++) {
        if (fast == nullptr) {
            return head;
        }
        fast = fast -> next;
    } if (fast == nullptr) {
        Node<int>* removed = head;
        head = head -> next;
        delete removed;
        return head;
    } while (fast ->next != nullptr) {
        fast = fast->next;
        slow = slow ->next;
    }

    Node<int>* removed = slow->next;
    slow->next =removed->next;
    delete removed;
    return head;

}

int main() {

    Node<int>* head = new Node<int>(1);
    head->next = new Node<int>(2);
    head->next->next = new Node<int>(3);
    head->next->next->next = new Node<int>(4);
    head->next->next->next->next = new Node<int>(5);

    head = removeNthFromEnd(head, 2);

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