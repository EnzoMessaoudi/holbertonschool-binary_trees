#include "binary_trees.h"

/**
* binary_tree_is_leaf - Check if a node is a leaf of a binary tree
* @node: Node checked
* Return: Return 1 if it is or 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
