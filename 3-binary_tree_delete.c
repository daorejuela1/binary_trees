#include "binary_trees.h"

/**
 *binary_tree_delete - insert node to the left
 *@tree: value of binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
