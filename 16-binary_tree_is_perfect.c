#include "binary_trees.h"
/**
 * binary_tree_is_perfect - see below
 * Description - checks the given node to see if the tree is perfect
 * @tree: the inputted node
 * Return: Always 1 (perfect)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_count = 0, r_count = 0;;

	if (tree)
	{
		if (tree->left)
			l_count += binary_tree_is_perfect(tree->left);
		if (tree->right)
			r_count += binary_tree_is_perfect(tree->right);
		if (!tree->left || !tree->right)
		{
			if (tree->parent->left->left || tree->parent->left->right)
				return (0);
			if (tree->parent->right->left || tree->parent->right->right)
				return (0);
		}
		if (l_count == r_count)
			return (1);
	}
	return (0);
}
