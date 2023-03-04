#ifndef INCLUDE_LIST_H
#define INCLUDE_LIST_H

#include "stdio.h"
#include "stdlib.h"

typedef struct {
    char *items;
    int last;
} List;

List new_list(int size);

void include_value(List *list, char character);

void print_list(List *list);

#endif