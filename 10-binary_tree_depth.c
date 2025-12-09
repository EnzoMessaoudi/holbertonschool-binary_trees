#include "binary_trees.h"

/**
* binary_tree_depth - Measure the depth of a tree
* @tree: tree measured
* Return: Return the depth
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
