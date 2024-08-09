#include "binary_trees.h"
/**
* binary_tree_depth - see below
* Description - counts how deep a given node is down a tree
* @tree: the node we will be counting from
* Return: Always parent_count
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent_count = 0;

	if (tree)
	{
		if (tree->parent)
			parent_count = 1 + binary_tree_depth(tree->parent);
		return (parent_count);
	}
	return (0);
}
