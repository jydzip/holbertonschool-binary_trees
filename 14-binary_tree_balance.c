#include "binary_trees.h"
int _binary_tree_balance_get_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Binary tree
 * Return: Result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count = 0, height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = _binary_tree_balance_get_height(tree->left);
	height_r = _binary_tree_balance_get_height(tree->right);
	count = height_l - height_r;
	return (count);
}

/**
 * _binary_tree_balance_get_height - Get height of a binary tree
 * by balance function
 *
 * @tree: Binary tree
 * Return: Result
 */
int _binary_tree_balance_get_height(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
		return (-1);

	height_l = _binary_tree_balance_get_height(tree->left);
	height_r = _binary_tree_balance_get_height(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	return (height_r + 1);
}
