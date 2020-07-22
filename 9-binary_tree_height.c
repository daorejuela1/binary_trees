#include "binary_trees.h"

/**
 *binary_tree_height - height of node
 *@tree: value of binary tree
 *Return: value of height node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int countLeft = 0, countRight = 0;

	if (tree == NULL)
		return (0);
	return (countpa(countLeft, countRight, tree) - 1);
}
/**
 *countpa - counter for parametter
 *@countLeft: counter for left node
 *@countRight: counter for right node
 *@tree: binari tree
 *Return: value of counter
 */
int countpa(int countLeft, int countRight, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
		countLeft = countpa(countLeft, countRight, tree->left);
		countRight = countpa(countLeft, countRight, tree->right);
		if (countRight > countLeft)
			return (countRight + 1);
		return (countLeft + 1);
}
