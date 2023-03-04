#ifndef INCLUDE_LIST_C
#define INCLUDE_LIST_C

#include "list.h"

List new_list(int size) {
    List list;
    list.items = malloc(size * sizeof(char));
    list.last = 0;

    return list;
}

void include_value(List *list, char character) {
    list->items[list->last] = character;
    list->last++;
}

void print_list(List *list) {
    for(int i=0;i<list->last;i++) printf("%c", list->items[i]);
}

#endif