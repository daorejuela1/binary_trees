#include "binary_trees.h"

/**
 *binary_tree_size - size of tree
 *@tree: value of binary tree
 *Return: value of size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int c1 = 0;

	if (tree == NULL)
		return (0);
	return (count(&c1, tree));
}
/**
 *count - counter of nodes
 *@tree: value of binary tree
 *@c1: counter of nodes
 *Return: value of count of nodes
 */
int count(int *c1, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	count(c1, tree->left);
	count(c1, tree->right);
	*c1 = *c1 + 1;
	return (*c1);
}
