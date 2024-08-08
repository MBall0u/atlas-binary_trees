#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node in the left position of the parent
* Description - puts itself in the left position of the parent node and
* if there is already a left node then it reallocates it to its left
* @parent: the parent node
* @value: the value stored in the new node
* Return: Always new node (success)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		fprintf(stderr, "Tree Node Allocation Error\n");
		return (NULL);
	}

	new->n = value;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->parent = parent;
	}
	else
		new->left = NULL;
	parent->left = new;
	new->parent = parent;
	new->right = NULL;

	return (new);
}
