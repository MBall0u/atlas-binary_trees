#include "binary_trees.h"
/**
 * binary_tree_nodes - see below
 * Description - counts all nodes with at least one child
 * @tree: node passed as parent
 * Return: Always count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (0);
		count += 1;
		if (tree->left)
			count = count + binary_tree_nodes(tree->left);
		if (tree->right)
			count = count + binary_tree_nodes(tree->right);
		return (count);
	}
	return (0);
}
