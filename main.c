#include "List/list.h"

int main() {
    List list = new_list(6);

    add_item(&list, 'I');
    add_item(&list, 'T');
    add_item(&list, 'A');
    add_item(&list, 'J');
    add_item(&list, 'A');
    add_item(&list, 'I');

    print_list(&list);

    return 0;
}