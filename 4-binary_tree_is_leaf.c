#include "binary_trees.h"
/**
 * binary_tree_is_leaf - see below
 * Description - checks to see if a node is a leaf or not
 * @node: the node being checked
 * Return: Always 1 (success)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!(node->left) && !(node->right))
			return (1);
	}
	return (0);
}
