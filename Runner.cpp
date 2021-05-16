#include "stdio.h"
#include "Linkedlist.h"

void printList(Linkedlist *list){
    
}

int main(int argc, char const *argv[])
{
    printf("Testing! \n");

    Linkedlist *list = new Linkedlist();

    printf("Size of list: %i\n", list->get_size());

    delete list;

    return 0;
}
