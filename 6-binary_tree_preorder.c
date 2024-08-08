#include "binary_trees.h"
/**
 * binary_tree_preorder - see below
 * Description - Prints the binary tree in preorder
 * @tree: the root node passed in
 * @func: a pointer function passed in
 * Return: Void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
