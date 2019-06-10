#ifndef LIST_H
#define LIST_H
#include "node.h"
typedef struct List {
    struct Node *head;
    int size;
} List;
List *create_list();
void add(List *list, int v);
#endif