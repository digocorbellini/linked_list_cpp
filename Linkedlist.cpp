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
    Node *newNode = new Node(value, NULL);
    last->next = newNode;
    last = newNode;
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

/**
 * @brief empty this linked list
 */
void Linkedlist::clear(){

}

/**
 * @brief insert the given value at the given index
 * 
 * @param index the index for the element to be inserted
 * @param value the value of the element to be inserted
 */
void Linkedlist::insert(int index, void *value){

}

/**
 * @brief Get the last element of the list
 * 
 * @return void* the value of the last element in the list 
 */
void *Linkedlist::get(){

}

/**
 * @brief get the element at the given index
 * 
 * @param index the index of the element 
 * @return void* the value of the element at the given index
 */
void *Linkedlist::get(int index){

}