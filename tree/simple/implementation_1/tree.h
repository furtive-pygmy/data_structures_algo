#ifndef TREE_H
#define TREE_H
#include "node.h"
typedef struct Tree{
	int size;
	Node *root;
}
void addValue(Tree *t, int val);
#endif

