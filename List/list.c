#ifndef INCLUDE_LIST_C
#define INCLUDE_LIST_C

#include "list.h"
#include <stdio.h>

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

int get_last(List *list) {
    return list->last;
}

void print_list(List *list) {
    for(int i=0;i<list->last;i++) printf("%d %c\n", i, get_item(list, i));
}

void sort(List *list) {
    for(int i=0;i<list->last;i++) for(int j=0;j<list->last;j++) if(get_item(list, j) > get_item(list, j+1)) swap(list, j, j+1);
}

void swap(List *list, int position1, int position2) {
    char temp = list->items[position1];
    list->items[position1] = get_item(list, position1);
    list->items[position2] = get_item(list, position2);
}

List merge_list(List *list1, List *list2) {
    List list = new_list(get_last(list1) + get_last(list2));

    for(int i=0;i<list.last/2;i++) add_item(&list, get_item(list1, i));

    for(int i=list.last;i<list.last;i++) add_item(&list, get_item(list2, i));

    print_list(&list);

    sort(&list);

    return list;
}

#endif