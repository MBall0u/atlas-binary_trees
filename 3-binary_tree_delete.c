#include "binary_trees.h"
/**
* binary_tree_delete - deletes the binary tree
* Description - works down the binary tree left to right and
* frees the node
* @tree: the root node passed to it
* Return: Always void (success)
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return;
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		if(tree->left)
		{
			free(tree->left);
			tree->left = NULL;
		}
		if (tree->right)
		{
			free(tree->right);
			tree->right = NULL;
		}
		if (tree->parent == NULL)
		{
			free(tree);
			tree = NULL;
		}
	}
}
