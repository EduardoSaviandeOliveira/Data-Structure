#include "List/list.h"

int main() {
    List list1 = new_list(5);
    List list2 = new_list(5);

    add_item(&list1, '1');
    add_item(&list1, '3');
    add_item(&list1, '5');
    add_item(&list1, '7');
    add_item(&list1, '9');

    add_item(&list2, '2');
    add_item(&list2, '4');
    add_item(&list2, '6');
    add_item(&list2, '8');

    List list3 = merge_list(&list1, &list2);
    print_list(&list3);

    return 0;
}