#include "Linkedlist.h"

Linkedlist::Linkedlist(){
    size = 0;
    head = new Node(NULL, NULL);
    last = NULL;
}

Linkedlist::~Linkedlist(){
    delete head;
    delete last;
}

Node::Node(void *data, Node *next){
    this->data = data;
    this->next = next;
}

/**
 * @brief Returns a pointer to the node before the given index
 * 
 * @param index an index in this liked list. Must be < size - 1 and >=0
 * @return Node* a pointer to the node before the given index
 */
Node *Linkedlist::getNodeBefore(int index){
    assert(index < size);
    assert(index >= 0);

    Node *nBefore = head;
    for(int i = 0; i < index; i++){
        nBefore = nBefore->next;
    }

    return nBefore;
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
    if(last != NULL){
        // set the previous last's next to this new node
        last->next = newNode;
    }else{
        // list is empty so the last node is also the first
        // node
        head->next = newNode;
    }
    last = newNode;
    size++;
}

/**
 * @brief remove the last element int the list
 * 
 * @return void* the value of the last element
 */
void *Linkedlist::remove(){
    return NULL;
}

/**
 * @brief remove the element at the index
 * 
 * @param index the index of the element to be removed
 * @return void* the value of the element removed
 */
void *Linkedlist::remove(int index){
    return NULL;
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
    assert(index >= 0);
    assert(index <= size);

    // add to the end if necessary
    if(index == size){
        add(value);
        return;
    }

    Node *nBefore = getNodeBefore(index);
    Node *newNode = new Node(value, nBefore->next);
    nBefore->next = newNode;
    size++;
} 

/**
 * @brief Get the last element of the list
 * 
 * @return void* the value of the last element in the list 
 */
void *Linkedlist::get(){
    return last->data;
}

/**
 * @brief get the element at the given index
 * 
 * @param index the index of the element. Must be < size and >= 0
 * @return void* the value of the element at the given index
 */
void *Linkedlist::get(int index){
    assert(index < size);
    assert(index >= 0);

    if(index == size - 1)
        return last->data;

    Node *nBefore = getNodeBefore(index);

    return nBefore->next->data;
}

/**
 * @brief Prints out the entire list
 * 
 */
void Linkedlist::print(){
    cout << "[";
    for(int i = 0; i < size; i++){
        cout << *(int *)get(i); // temporary before making it generic
        if(i < size - 1){
            cout << ", ";
        }
    }  
    cout << "]" << endl; 
}