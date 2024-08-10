#include "binary_trees.h"
/**
 * binary_tree_uncle - see below
 * Description - checks node to see if its parent
 * has a sibling
 * @node: the passed node to check
 * Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent->parent->left || node->parent->parent->right)
			return (NULL);
		if (node->parent->n == node->parent->parent->right->n)
		{
			if (node->parent->parent->left)
				return (node->parent->parent->left);
		}
		if (node->parent->n == node->parent->parent->left->n)
		{
			if (node->parent->parent->right)
				return (node->parent->parent->right);
		}
	}
	return (NULL);
}
