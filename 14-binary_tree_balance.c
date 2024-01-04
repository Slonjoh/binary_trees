#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	height_right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (height_left - height_right);
}
