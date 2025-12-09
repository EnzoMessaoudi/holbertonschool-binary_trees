#include "binary_trees.h"


/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: Number of nodes, 0 is tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t index_left;
	size_t index_right;

	if (tree == NULL)
		return (0);

	index_left = binary_tree_size(tree->left);
	index_right = binary_tree_size(tree->right);

	return (1 + index_left + index_right);
}
