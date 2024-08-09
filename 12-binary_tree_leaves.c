#include "binary_trees.h"
/**
* binary_tree_leaves - see below
* Description - counts the leaves on the tree
* @tree: the binary tree
* Return: Always count (success)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left)
			count = count + binary_tree_leaves(tree->left);
		if (tree->right)
			count = count + binary_tree_leaves(tree->right);
		return (count);
	}
	return (0);
}
