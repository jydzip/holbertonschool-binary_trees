#include "binary_trees.h"
int _binary_tree_depth(const binary_tree_t *tree);
int _binary_tree_is_perfect(const binary_tree_t *tree, int level, int depth);

/**
 * binary_tree_is_perfect - Check if binary is perfect
 * @tree: Binary tree
 * Return: 1 is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	depth = _binary_tree_depth(tree);

	return (_binary_tree_is_perfect(tree, 0, depth));
}

/**
 * _binary_tree_is_perfect - Check if binary is perfect recursive
 * @tree: Binary tree
 * @level: Actual level
 * @depth: Depth of binary tree
 * Return: 1 is perfect, 0 otherwise
 */
int _binary_tree_is_perfect(const binary_tree_t *tree, int level, int depth)
{
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	level += 1;
	if (_binary_tree_is_perfect(tree->left, level, depth) &&
			_binary_tree_is_perfect(tree->right, level, depth))
		return (1);
	return (0);
}


/**
 * _binary_tree_depth - Measures the depth of a node in binary tree for perfect
 * @tree: binary tree
 * Return: Depth
 */
int _binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;
	binary_tree_t *node = NULL;

	if (tree == NULL)
		return (0);

	node = (binary_tree_t *)tree;
	while (node != NULL)
	{
		count++;
		node = node->left;
	}
	return (count - 1);
}
