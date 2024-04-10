#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in binary tree
 * @tree: binary tree
 * Return: Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	binary_tree_t *node = NULL;

	if (tree == NULL)
		return (0);

	node = tree->parent;
	while (node != NULL)
	{
		count++;
		node = node->parent;
	}
	return (count);
}
