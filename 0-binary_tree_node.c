#include "binary_trees.h"
/**
* binary_tree_node - makes a new node and stores a value
* Description - creates a new node with no children and is passed the
* their parent node and the value for them to store
* @parent: a pointer to the parent of the new node
* @value: the value to be stored in the new node
* Return: Always new node (success)
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		fprintf(stderr, "Tree Node Allocation Error");
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
