#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node. If no common ancestor
 * was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp_first, *temp_second;

	if (first == NULL || second == NULL)
		return (NULL);

	temp_first = first;
	while (temp_first != NULL)
	{
		temp_second = second;
		while (temp_second != NULL)
		{
			if (temp_first == temp_second)
				return ((binary_tree_t *)temp_first);
			temp_second = temp_second->parent;
		}
		temp_first = temp_first->parent;
	}

	return (NULL);
}
