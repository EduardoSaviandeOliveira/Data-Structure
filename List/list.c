#ifndef INCLUDE_LIST_C
#define INCLUDE_LIST_C

#include "list.h"

List new_list(int size) {
    List list;
    list.items = malloc(size * sizeof(char));
    list.last = 0;

    return list;
}

void add_item(List *list, char character) {
    list->items[list->last++] = character;
}

void remove_item(List *list, int positon) {
    
}

char get_position(List *list, char character) {
    for(int i=0;i<list->last;i++) if (character == list->items[i]) return i;
    return -1;
}

char get_item(List *list, int position) {
    return list->items[position];
}

char get_last_item(List *list) {
    return list->items[list->last];
}

void print_list(List *list) {
    for(int i=0;i<list->last;i++) printf("%c", get_item(list, i));
}

#endif