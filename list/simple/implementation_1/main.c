#include <stdio.h>
#include <stdlib.h>
//#include "node.h"
#include "list.h"

int main(int argc, char *argv[])
{
    List *list = create_list();
    add(list, 12);
    add(list, 22);
    add(list, 32);

    return EXIT_SUCCESS;
}