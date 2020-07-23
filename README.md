## BINARY TREES

In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. 

From a graph theory perspective, binary (and K-ary) trees as defined here are actually arborescences. A binary tree may thus be also called a bifurcating arborescence a term which appears in some very old programming books, before the modern computer science terminology prevailed.

## Binary Search Tree

In computer science, a binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a key greater than all the keys in the node's left subtree and less than those in its right subtree. A binary tree is a type of data structure for storing data such as numbers in an organized way.

## Uses

Binary search trees allow binary search for fast lookup, addition and removal of data items, and can be used to implement dynamic sets and lookup tables. The order of nodes in a BST means that each comparison skips about half of the remaining tree, so the whole lookup takes time proportional to the binary logarithm of the number of items stored in the tree. 

## Insertion

Insertion begins as a search would begin; if the key is not equal to that of the root, we search the left or right subtrees as before. Eventually, we will reach an external node and add the new key-value pair (here encoded as a record 'newNode') as its right or left child, depending on the node's key.

## Insert left

```
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

```

## Insertion on right

```
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

```

## Deletion

When removing a node from a binary search tree it is mandatory to maintain the in-order sequence of the nodes. There are many possibilities to do this. 

```
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

```

