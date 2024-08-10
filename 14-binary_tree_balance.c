#include "binary_trees.h"
/**
 * binary_tree_balance - see below
 * Description - finds the balance factor of a tree
 * @tree: the passed node
 * Return: Always count (success)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree)
	{
		if (tree->left)
			left_count = 1 + binary_tree_balance(tree->left);
		if (tree->right)
			right_count = 1 + binary_tree_balance(tree->right);
		if (tree->parent)
		{
			if (left_count >= right_count)
				return (left_count);
			if (right_count >= left_count)
				return (right_count);
		}
		return (left_count - right_count);
	}
	return (0);
}
