#include "binary_trees.h"


/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves, 0 is tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t index_left;
	size_t index_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	index_left = binary_tree_leaves(tree->left);
	index_right = binary_tree_leaves(tree->right);

	return (index_left + index_right);
}
