#include "binary_trees.h"

/**
 *binary_tree_height - height of node
 *@tree: value of binary tree
 *Return: value of height node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int cleft = 0, cright = 0;

	if (tree == NULL)
		return (0);
	countLeft(&cleft, tree);
	countRight(&cright, tree);
	cleft --;
	cright --;
	if (cleft < cright)
		return (cright);
	return (cleft);
}
/**
 *countLeft - count of left node
 *@tree: value of binary tree
 *@c2: counter
 *Return: value of left node
 */
int countLeft(int *c2, const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		countLeft(c2, tree->left);
		*c2 = *c2 + 1;
	}
	return (*c2);
}
/**
 *countRight - count of righ node
 *@tree: value of binary tree
 *@c2: counter
 *Return: value of right node
 */
int countRight(int *c2, const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		countRight(c2, tree->right);
		*c2 = *c2 + 1;
	}
	return (*c2);
}
