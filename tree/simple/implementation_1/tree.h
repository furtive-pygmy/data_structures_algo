#ifndef TREE_H
#define TREE_H
#include "node.h"
typedef struct Tree{
	int size;
	Node *root;
}Tree;
void addValue(Tree *t, int val);
#endif

