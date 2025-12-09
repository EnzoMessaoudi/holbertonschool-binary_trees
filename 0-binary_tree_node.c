#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary_tree node
* @parent: The parent of the new node
* @value: Value conatains inside of the new node
* Return: Return the address of the node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (0);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
