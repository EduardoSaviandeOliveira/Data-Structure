#include "List/list.h"

int main() {
    List list = new_list(6);

    include_value(&list, 'I');
    include_value(&list, 'T');
    include_value(&list, 'A');
    include_value(&list, 'J');
    include_value(&list, 'A');
    include_value(&list, 'I');

    print_list(&list);

    return 0;
}