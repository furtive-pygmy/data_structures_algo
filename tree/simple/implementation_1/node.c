#include<stdlib.h>
#include "node.h"

Node *create_node(int val)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void add_node(Node *a, Node *b)
{
	if (b->val < a->val) {
		if (a->left == NULL) {
			a->left = b;
		} else {
			add_node(a->left, b);
		}
	} else {
		if (a->right == NULL) {
			a->right = b;
		} else {
			add_node(a->right, b);
		}
	}
}
