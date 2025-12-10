#include "binary_trees.h"

/**
* binary_tree_leaves - Check how many leaves a node have
* @tree: Tree tested
* Return: Return the number of leaves the node have
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
