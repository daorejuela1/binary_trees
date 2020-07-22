#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t height;
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    height = binary_tree_height(root);
    printf("Height from %d: %lu\n", root->n, height);
    
    return (0);
}