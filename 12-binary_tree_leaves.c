#include "binary_trees.h"

/**
 *binary_tree_leaves- Counts the leaves in a binary tree.
 *@tree: A pointer to the root node of the tree to count the leaves
 *
 *Return: the nomber of count in the free
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		count += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		count += binary_tree_leaves(tree->right);
	return (count);
}
