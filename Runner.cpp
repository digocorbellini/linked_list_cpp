#include "stdio.h"
#include "Linkedlist.h"

int main(int argc, char const *argv[])
{
    printf("Testing! \n");

    Linkedlist *list = new Linkedlist();

    printf("Size of list: %i\n", list->get_size());
    list->print();
    int *x = (int *)malloc(sizeof(int));
    *x = 10;
    list->add(x);
    printf("get 0: %i\n", *(int *)list->get(0));
    list->insert(1, x);
    int y = 5;
    list->add(&y);
    list->print();

    cout << "Remove last: " 
        << *(int *)list->remove() << endl;

    list->clear();
    list->print();
    delete list;
    free(x);

    return 0;
}
