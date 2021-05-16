#ifndef __LINKEDLIST_H_INCLUDED__
#define __LINKEDLIST_H_INCLUDED__

#include "string.h"
#include "strings.h"
#include "array"

class Linkedlist{
    private:
        class Node{
            private:
                Node *next;
                void *data;
            public:
                Node(void *data, Node *next);
        };

        int size;
        Node *head;
        Node *last;
    public:
        Linkedlist();
        ~Linkedlist();
        int get_size();
        void add(void *value);
        void *remove();
        void *remove(int index);   
        void clear();
        bool insert(int index, void *value);
};

#endif
