#include "binary_trees.h"
/**
* binary_tree_postorder - see below
* Description - traverses the binary tree in postorder
* @tree: the binary tree
* @func: the pointer function
* Return: Always void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
