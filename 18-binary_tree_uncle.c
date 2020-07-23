#include "binary_trees.h"

/**
 *binary_tree_uncle - checks tree uncle
 *@node: value of binary tree
 *Return: address of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	node = node->parent;
	father = node;
	node = node->parent;
	if (node->left == father)
		return (node->right);
	return (node->left);
}
