#include "binary_trees.h"

/**
 *binary_tree_is_full - is full or no full
 *@tree: value of binary tree
 *Return: value of full
 */
int binary_tree_is_full(const binary_tree_t *tree)
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
	if (tree->left == NULL && tree->right == NULL)
		return (*c1 = 1);
	else if (tree->left == NULL && tree->right != NULL)
		*c1 = 0;
	else if (tree->right == NULL && tree->left != NULL)
		*c1 = 0;
	*c1 = count(c1, tree->left) && count(c1, tree->right);
	return (*c1);
}
