#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);

	if (tree->left != NULL)
		count++;
	if (tree->right != NULL)
		count++;
	return (count);
}
