#include "Linkedlist.h"

/**
 * @brief Construct a new Linkedlist:: Linkedlist object
 */
Linkedlist::Linkedlist(){
    size = 0;
    head = new Node(NULL, NULL);
    last = NULL;
}

/**
 * @brief Destroy the Linkedlist:: Linkedlist object
 */
Linkedlist::~Linkedlist(){
    delete head;
}

/**
 * @brief Construct a new Node:: Node object
 * 
 * @param data the value of this node
 * @param next a pointer to the next node in the list
 */
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
    assert(size > 0);

    Node *nBefore = getNodeBefore(size - 1);
    void *lastData = last->data;
    delete last;
    size--;

    // check to see if the list is now empty
    if(size == 0){
        // list is empty so last is null
        last = NULL;
    }else{
        // list isn't empty so node before the previous last
        // is now last
        last = nBefore;
        last->next = NULL;
    }

    return lastData;
}

/**
 * @brief remove the element at the index
 * 
 * @param index the index of the element to be remove.
 * index >= 0 && index < size
 * @return void* the value of the element removed
 */
void *Linkedlist::remove(int index){
    assert(size > 0);
    assert(index >= 0 && index < size);

    // remove from the end of the list
    if(index == size - 1){
        return remove();
    }

    Node *nBefore = getNodeBefore(index);
    Node *currentNode = nBefore->next;
    nBefore->next = currentNode->next;
    void *currentData = currentNode->data;
    delete currentNode;
    size--;

    return currentData;
}

void Linkedlist::clearHelper(Node *n){
    // Base case: node is null (aka we have finished 
    // traversing the list)
    if(n == NULL){
        return;
    }

    // Recursive case: continue to traverse the list
    clearHelper(n->next);

    // remove this node
    delete n;
}

/**
 * @brief empty this linked list
 */
void Linkedlist::clear(){
    clearHelper(head->next);
    size = 0;
    last = NULL;
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