#include "Linkedlist.h"

Linkedlist::Linkedlist(){
    size = 0;
    head = new Node(NULL, NULL);
    last = new Node(NULL, NULL);
}

Linkedlist::~Linkedlist(){
    delete head;
    delete last;
}

Linkedlist::Node::Node(void *data, Node *next){
    this->data = data;
    this->next = next;
}

/**
 * @brief Get the size of this linked list
 * 
 * @return int the size of this linked list
 */
int Linkedlist::get_size(){
    return size;
}

/**
 * @brief add the value to the end of the list
 * 
 * @param value the value of the new element
 */
void Linkedlist::add(void *value){

}

/**
 * @brief remove the last element int the list
 * 
 * @return void* the value of the last element
 */
void *Linkedlist::remove(){

}

/**
 * @brief remove the element at the index
 * 
 * @param index the index of the element to be removed
 * @return void* the value of the element removed
 */
void *Linkedlist::remove(int index){

}











