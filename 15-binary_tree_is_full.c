#include "binary_trees.h"

/**
* binary_tree_is_full - Check if a binary tree is full or not
* @tree: Binary tree tested
* Return: Return 1 if full or 0 if not
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int index_left;
	int index_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL || tree->right == NULL)
		return (0);

	index_left = binary_tree_is_full(tree->right);
	index_right = binary_tree_is_full(tree->left);

	if (index_left != index_right)
		return (0);

	return (index_left);
}
