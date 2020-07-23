#include "binary_trees.h"
/**
 *binary_tree_is_perfect - checks binary tree is perfect
 *@tree: value of binary tree
 *Return: 1 if is perfect 0 if not
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		tmp = node->parent->right;
	else
		tmp = node->parent->left;
	return (tmp);
}
