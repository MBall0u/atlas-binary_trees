#include "binary_trees.h"
/**
* binary_tree_height - see below
* Description - traverses the inputted tree and calculates the height
* @tree: the binary tree
* Return: Always highest count
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree)
	{
		if (tree->left)
			left_count = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_count = 1 + binary_tree_height(tree->right);
		if (!tree->left && !tree->right)
		{
			if (left_count >= right_count)
				return (left_count);
			if (right_count >= left_count)
				return (right_count);
		}
	}
	return (0);
}
