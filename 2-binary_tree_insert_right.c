#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node in the right position of the parent
* Description - puts itself in the right position of the parent node and
* if there is already a right node then it reallocates it to its right
* @parent: the parent node
* @value: the value stored in the new node
* Return: Always new node (success)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->parent = parent;
	new->left = NULL;

	return (new);
}
