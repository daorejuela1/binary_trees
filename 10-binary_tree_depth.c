#include "binary_trees.h"
size_t recursive_depth(const binary_tree_t *tree, int counter);
/**
 * binary_tree_depth - insert node to the left
 * @tree: value of binary tree
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree == NULL)
		return (counter);
	return (recursive_depth(tree, counter) - 1);
}

/**
 * recursive_depth - insert node to the left
 * @tree: value of binary tree
 * @counter: counts the number of parents
 * Return: depth of the binary tree
 */
size_t recursive_depth(const binary_tree_t *tree, int counter)
{
	if (tree == NULL)
		return (counter);
	return (recursive_depth(tree->parent, counter + 1));
}
