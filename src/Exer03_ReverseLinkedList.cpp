#include "LinkedList.h"

int main () {
    LinkedList<int> lista;

    lista.addLast(20);
    lista.addLast(4);
    lista.addLast(5);
    lista.addLast(19);
    lista.addLast(47);

    std::cout << "Antes: ";
    lista.print();

    lista.reverse();
    std::cout << "Depois: ";
    lista.print();
    return 0;
}