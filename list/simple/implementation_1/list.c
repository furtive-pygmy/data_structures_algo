#include <stdlib.h>
#include "node.h"
#include "list.h"

List *create_list()
{
    List *list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->size = 0;

    return list;
}

void add(List *list, int v)
{
    Node *node = create_node(v);
    if (list->head == NULL) {
        list->head = node;
    } else {
        node->next = list->head;
        list->head = node;
    }
    list->size++;
}
