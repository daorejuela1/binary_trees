#include "binary_trees.h"
int height(const binary_tree_t *tree);
int my_counter(int countLeft, int countRight, const binary_tree_t *tree);
/**
 *binary_tree_balance - size of tree
 *@tree: value of binary tree
 *Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
/**
 *height - height of node
 *@tree: value of binary tree
 *Return: value of height node
 */
int height(const binary_tree_t *tree)
{
	int countLeft = 0, countRight = 0;

	if (tree == NULL)
		return (0);
	return (my_counter(countLeft, countRight, tree));
}
/**
 *my_counter - counter for parametter
 *@countLeft: counter for left node
 *@countRight: counter for right node
 *@tree: binari tree
 *Return: value of counter
 */
int my_counter(int countLeft, int countRight, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	countLeft = my_counter(countLeft, countRight, tree->left);
	countRight = my_counter(countLeft, countRight, tree->right);
	if (countRight > countLeft)
		return (countRight + 1);
	return (countLeft + 1);
}
