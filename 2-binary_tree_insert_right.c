#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert node to the left
 *@parent: the parent of tree
 *@value: the value
 *Return: Null if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);
	nuevo = malloc(sizeof(binary_tree_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = value;
	nuevo->parent = parent;
	nuevo->left = NULL;
	nuevo->right = NULL;
	if (parent->right != NULL)
	{
		tmp = parent->right;
		tmp->parent = nuevo;
		parent->right = nuevo;
		nuevo->right = tmp;
		return (nuevo);
	}
	parent->right = nuevo;
	return (nuevo);
}
