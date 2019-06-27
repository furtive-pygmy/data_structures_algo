#include <stdlib.h> 
#include "node.h"
#include "tree.h"

void addValue(Tree *t, int val) 
{
	Node *node = create_node(val);
	if (t->root == NULL) {
		t->root = node;
	} else {
		add_node(t->root, node);
	}
}
