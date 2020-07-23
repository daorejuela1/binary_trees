#include "binary_trees.h"
/**
 *binary_tree_sibling - checks sibling of the node
 *@node: value of node
 *Return: value of sibling node
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
