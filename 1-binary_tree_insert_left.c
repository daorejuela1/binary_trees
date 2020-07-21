#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert node to the left
 *@parent: the parent of tree
 *@value: the value
 *Return: Null if failed
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		tmp = parent->left;
		tmp->parent = nuevo;
		parent->left = nuevo;
		nuevo->left = tmp;
		return (nuevo);
	}
	parent->left = nuevo;
	return (nuevo);
}
