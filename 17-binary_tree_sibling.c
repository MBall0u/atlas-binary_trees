#include "binary_trees.h"
/**
 * binary_tree_sibling - see below
 * Description - check the inputted node to see if it
 * has a sibling
 * @node: the node to check
 * Return: Always sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if ((node->n == node->parent->left->n) && node->parent->right)
		return (node->parent->right);
	if ((node->n == node->parent->right->n) && node->parent->left)
		return (node->parent->left);
	return (NULL);
}
