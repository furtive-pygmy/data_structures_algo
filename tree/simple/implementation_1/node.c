#include<stdlib.h>

Node *create_node(int val)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->val = val
	node->left = NULL;
	node->right = NULL;

	return node;
}
