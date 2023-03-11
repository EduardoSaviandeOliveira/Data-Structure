#ifndef INCLUDE_SINGLY_LINKED_LIST_H
#define INCLUDE_SINGLY_LINKED_LIST_H

typedef struct {
    int item;
    struct Node *next;
} SinglyLinkedNode;

typedef struct {
    SinglyLinkedNode *start;
    SinglyLinkedNode *end;
} SinglyLinkedList;

SinglyLinkedList *NewSinglyLinkedList();

void AddItem(SinglyLinkedList *singlyLinkedList, int item);

void Append(SinglyLinkedList *singlyLinkedList);

void DeleteItem(SinglyLinkedList *singlyLinkedList, int position);

int GetItem();

void DeleteSinglyLinkedList();

void PrintList();

#endif
