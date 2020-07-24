#include "binary_trees.h"

/**
 *binary_tree_rotate_left - rotate node to the left
 *@tree: tree node
 *Return: parent root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (NULL);
	tree->parent = tree->right;
	tree->right = tree->right->left;
	tree->parent->left = tree;
	if (tree->right)
		tree->right->parent = tree;
	tree->parent->parent = NULL;
	return (tree->parent);
}
