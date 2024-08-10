#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_is_full(tree->left);
		if (tree->right)
			count += binary_tree_is_full(tree->right);
		if ((count % 2) == 0)
			return (1);
	}
	return (0);
}
