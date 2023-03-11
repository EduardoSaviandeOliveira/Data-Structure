#ifndef INCLUDE_SINGLY_LINKED_LIST_C
#define INCLUDE_SINGLY_LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>

#include "singlyLinkedList.h"

SinglyLinkedList *NewSinglyLinkedList() {
    SinglyLinkedList *singlyLinkedList = malloc(sizeof(SinglyLinkedList));
    return singlyLinkedList;
}

/// in order
void AddItem(SinglyLinkedList *singlyLinkedList, int item) {
    SinglyLinkedNode node = malloc(SinglyLinkedNode);
}

void Append(SinglyLinkedList *singlyLinkedList) {

}

void DeleteItem(SinglyLinkedList *singlyLinkedList, int position) {

}

int GetItem() {
    int value = 0;

    return value;
}

void DeleteSinglyLinkedList() {

};

void PrintList() {
    
}

#endif
