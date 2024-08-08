#include "binary_trees.h"
/**
 * binary_tree_is_root - see below
 * Description - checks to see if the node is the root
 * @node: the inputted node to be checked
 * Return: Always 1 (success)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
	}
	return (0);
}
