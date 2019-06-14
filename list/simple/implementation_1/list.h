#ifndef LIST_H
#define LIST_H
#include "node.h"
typedef struct List {
    struct Node *head;
    int size;
} List;
List *create_list();
int add_element_at_start(List *list, int v);
int add_element_at_end(List *list, int v);
#define list_head(list) ((list)->head)
#define list_size(list) ((list)->size)
#define list_is_empty(list) ((list)->size == 0 ? 1 : 0)
#endif
