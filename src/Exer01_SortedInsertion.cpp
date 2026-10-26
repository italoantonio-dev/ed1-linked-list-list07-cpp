#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> lista;

    lista.addSorted(20);
    lista.addSorted(10);
    lista.addSorted(30);
    lista.addSorted(25);

    std::cout << "Insercoes Concluidas. \n";
    lista.addSorted(20);
    lista.print();

    return 0;
}