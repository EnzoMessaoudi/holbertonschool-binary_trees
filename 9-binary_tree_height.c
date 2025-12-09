#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: How far a node is from furthest leaf
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t index_left;
	size_t index_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	index_left = binary_tree_height(tree->left);
	index_right = binary_tree_height(tree->right);

	if (index_left > index_right)
		return (1 + index_left);
	else
		return (1 + index_right);
}
