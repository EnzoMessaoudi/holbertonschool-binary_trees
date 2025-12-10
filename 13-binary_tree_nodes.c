#include "binary_trees.h"


/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes, 0 is tree is NULL
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
