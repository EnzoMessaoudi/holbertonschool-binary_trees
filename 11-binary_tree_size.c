#include "binary_trees.h"

/**
* binary_tree_size - Measure the number of node inside of a tree
* @tree: Tree checked
* Return: Return the number of nodes
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t index;

	if (tree == NULL)
		return (0);

	index = binary_tree_size(tree->left);
	index += binary_tree_size(tree->right);

	return (1 + index);
}
