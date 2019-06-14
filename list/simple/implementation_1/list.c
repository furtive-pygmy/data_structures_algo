#include <stdlib.h>
#include "node.h"
#include "list.h"

List *create_list()
{
    List *list = (List*)malloc(sizeof(List));
    if (list != NULL) {
        list->head = NULL;
        list->size = 0;
    }

    return list;
}

int add_element_at_start(List *list, int v)
{
    Node *node = create_node(v);
    if (list == NULL || node == NULL) {
        return -1;
    }
    if (list_is_empty(list)) {
        list->head = node;
    } else {
        node->next = list->head;
        list->head = node;
    }
    list->size++;

    return 0;
}
