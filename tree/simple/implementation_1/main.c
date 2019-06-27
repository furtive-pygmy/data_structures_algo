#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc, char *argv[])
{
	Tree *tree = (Tree*)malloc(sizeof(Tree));
	tree->size = 0;
	tree->root = NULL;
	addValue(tree, 5);

	return EXIT_SUCCESS;
}
