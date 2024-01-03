#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * print_tree - Recursively print binary tree
 * @tree: Pointer to the root of the binary tree
 * @space: Number of spaces for indentation
 */
static void print_tree(const binary_tree_t *tree, int space)
{
	if (tree == NULL)
		return;

	space += 5;

	print_tree(tree->right, space);
	printf("\n");

	for (int i = 5; i < space; i++)
		printf(" ");

	printf("(%d)\n", tree->n);

	print_tree(tree->left, space);
}

/**
 * binary_tree_print - Print binary tree
 * @tree: Pointer to the root of the binary tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	print_tree(tree, 0);
	printf("\n");
}
