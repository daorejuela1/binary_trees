#include "binary_trees.h"
/**
 *binary_tree_inorder- prints the binary tree in order
 *@tree: value of binary tree
 *@func: function to print the node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
