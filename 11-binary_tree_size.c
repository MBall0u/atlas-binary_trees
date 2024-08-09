#include "binary_trees.h"
/**
* binary_tree_size - see below
* Description - count from the tree node down
* @tree: the tree we are counting from
* Return: Always count (success)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left)
			count = count + binary_tree_size(tree->left);
		if (tree->right)
			count = count + binary_tree_size(tree->right);
		return (count);
	}
	return (0);
}
