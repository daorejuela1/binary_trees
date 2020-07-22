#include "binary_trees.h"
/**
 *binary_tree_postorder - prints the binary tree in pre order
 *@tree: value of binary tree
 *@func: function to print the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
