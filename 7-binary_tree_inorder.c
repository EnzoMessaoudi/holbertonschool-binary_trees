#include "binary_trees.h"

/**
* binary_tree_inorder - Print a tree inorder method
* @tree: The tree we will print
* @func: Function that the user call to print values
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
