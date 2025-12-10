#include "binary_trees.h"

/**
* binary_tree_nodes - Count the nodes which have at least 1 child
* @tree: Tree checked
* Return: Return the nodes with at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t index_left;
	size_t index_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	index_left = binary_tree_nodes(tree->left);
	index_right = binary_tree_nodes(tree->right);

	return (1 + index_left + index_right);
}
