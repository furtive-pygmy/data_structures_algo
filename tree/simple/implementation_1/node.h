#ifndef NODE_H
#define NODE_H
typedef struct Node {
    int val;
    struct Node *left;
    struct Node *right;
} Node;
Node *create_node(int val);
void add_node(Node *a, Node *b);
#endif
