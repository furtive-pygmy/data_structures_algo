#include <stdlib.h> 
#include "node.h"

void addValue(Tree *t, int val) 
{
	Node *node = create_node(val);
	if (t->root == NULL) {
		t->root = node;	
	}
}
