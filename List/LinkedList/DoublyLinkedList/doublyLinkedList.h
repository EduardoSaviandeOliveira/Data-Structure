#ifndef INCLUDE_DOUBLY_LINKED_LIST_H
#define INCLUDE_DOUBLY_LINKED_LIST_H

typedef struct {
    int number;
    struct Node *next;
    struct Node *previous;
} DoublyLinkedNode;

typedef struct {
    int item;
    DoublyLinkedNode *start;
    DoublyLinkedNode *end;
} DoublyLinkedList;

#endif
