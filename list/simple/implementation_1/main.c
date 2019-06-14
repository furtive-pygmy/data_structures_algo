#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char *argv[])
{
    List *list = create_list();
    add_element_at_start(list, 12);
    add_element_at_start(list, 22);
    add_element_at_start(list, 32);

    return EXIT_SUCCESS;
}