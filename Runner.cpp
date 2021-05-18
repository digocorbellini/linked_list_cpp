#include "stdio.h"
#include "Linkedlist.hpp"

int main(int argc, char const *argv[])
{
    printf("Testing! \n");

    Linkedlist<int> *list = new Linkedlist<int>();

    list->print();
    int a = 10;
    int b = 5;
    int c = 2;

    list->add(&a);
    list->add(&b);
    list->add(&c);
    list->insert(0, &c);
    list->print();

    cout << "remove last: " << *list->remove() << endl;
    cout << "remove first: " << *list->remove(0) << endl;
    list->print();

    cout << "get 1 " << *list->get(1) << endl;
    cout << "get 0 " << *list->get(0) << endl;

    delete list;

    return 0;
}
