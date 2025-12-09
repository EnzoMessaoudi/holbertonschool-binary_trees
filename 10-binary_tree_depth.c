#include "binary_trees.h"


/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the depth
 *
 * Return: How far a node is from the root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t index;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	index = binary_tree_depth(tree->parent);

	return (1 + index);
}
