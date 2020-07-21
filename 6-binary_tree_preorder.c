#include "binary_trees.h"
/**
 *binary_tree_preorder - prints the binary tree in pre order
 *@tree: value of binary tree
 *@func: function to print the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
