#include "binary_trees.h"
int count_i(int *c1, int *in, int *c2, const binary_tree_t *tree);

/**
 *binary_tree_is_perfect - checks binary tree is perfect
 *@tree: value of binary tree
 *Return: 1 if is perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c1 = 0, in = 0, c2 = 0;

	if (tree == NULL)
		return (0);
	return (count_i(&c1, &in, &c2, tree));
}
/**
 *count_i - counter of nodes
 *@tree: value of binary tree
 *@c1: parent height of first nodes
 *@in: index of the node
 *@c2: parent height of other nodes
 *Return: value of count of nodes
 */
int count_i(int *c1, int *in, int *c2, const binary_tree_t *tree)
{
	const binary_tree_t *temp = NULL;

	if (tree == NULL)
		return (0);
	count_i(c1, in, c2, tree->left);
	count_i(c1, in, c2, tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		temp = tree;
		*c2 = 0;
		while (temp != NULL)
		{
			temp = temp->parent;
			*c2 = *c2 + 1;
		}
		if (*in == 0)
		{
			*in = *in + 1;
			*c1 = *c2;
		}
		if (*c1 != *c2)
		{
			*c1 = -1;
			return (0);
		}
		return (1);
	}
	else if (tree->left == NULL && tree->right != NULL)
	{
		*c1 = -1;
		return (0);
	}
	else if (tree->left != NULL && tree->right == NULL)
	{
		*c1 = -1;
		return (0);
	}
	if (*c1 >= 1)
		return (1);
	return (0);
}
