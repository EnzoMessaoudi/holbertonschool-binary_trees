#include "binary_trees.h"

/**
 * own_pow - Computes the power of a number
 *
 * @base: the base number
 * @exp: the exponent
 *
 * Return: base raised to the power of exp
 */

size_t own_pow(size_t base, size_t exp)
{
	size_t result = 1;
	size_t i = 0;

	while (i < exp)
	{
		result *= base;
		i++;
	}

	return (result);
}

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

	index_left = binary_tree_height(tree->left);
	index_right = binary_tree_height(tree->right);

	if (index_left > index_right)
		return (1 + index_left);
	else
		return (1 + index_right);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	if (size == ((size_t)own_pow(2, height) - 1))
		return (1);

	return (0);
}
