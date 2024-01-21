#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Goes through the tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 * Description: If `tree` or `func` is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	int front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	if (queue == NULL)
		return;
	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left != NULL)
			queue[rear++] = current->left;
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
	free(queue);
}
