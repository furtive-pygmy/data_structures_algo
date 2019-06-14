#include <stdlib.h>
#include "node.h"

Node *create_node(int v)
{
    Node *node = (Node*)malloc(sizeof(Node));
    if (node != NULL) {
        node->val = v;
        node->next = NULL;
    }

    return node;
}