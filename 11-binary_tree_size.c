#include "binary_trees.h"

/**
 * binary_tree_size - Measures the sise of a node in binary tree
 * @tree: binary tree
 * Return: Depth
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count++;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count);
}
