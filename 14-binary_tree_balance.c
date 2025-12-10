#include "binary_trees.h"

/**
* binary_tree_height - Check the height of a tree
* @tree: Tree checked for his height
* Return: Return the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t index_left;
	size_t index_right;

	if (tree == NULL)
		return (0);


	index_left = binary_tree_height(tree->left);
	index_right = binary_tree_height(tree->right);

	if (index_left > index_right)
		return (1 + index_left);
	else
		return (1 + index_right);

}

/**
* binary_tree_balance - Measure the balence of a tree
* @tree: tree measured
* Return: Return the balence factor of @tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
