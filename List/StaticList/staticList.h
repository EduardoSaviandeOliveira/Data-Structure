#ifndef INCLUDE_LIST_H
#define INCLUDE_LIST_H

#include "stdio.h"
#include "stdlib.h"

typedef struct {
    char *items;
    int last;
} List;

List new_list(int size);

void add_item(List *list, char character);

void remove_item(List *list, int positon);

char get_position(List *list, char character);

char get_item(List *list, int position);

char get_last_item(List *list);

int get_last(List *list);

void print_list(List *list);

void sort(List *list);

void swap(List *list, int position1, int position2);

List merge_list(List *list1, List *list2);

#endif