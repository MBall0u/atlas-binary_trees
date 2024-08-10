#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
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
		if (l_count == r_count)
			return (1);
	}
	return (0);
}
