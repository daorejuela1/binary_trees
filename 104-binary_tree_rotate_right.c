#include "binary_trees.h"

/**
 *binary_tree_rotate_right - rotate node to the left
 *@tree: tree node
 *Return: parent root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (NULL);
	tree->parent = tree->left;
	tree->left = tree->left->right;
	tree->parent->right = tree;
	if (tree->left)
		tree->left->parent = tree;
	tree->parent->parent = NULL;
	return (tree->parent);
}
