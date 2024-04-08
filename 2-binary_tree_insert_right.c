#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child to another node.
 * @parent: Binary Tree parent
 * @value: Value for new node
 * Return: New node pointer or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;
	parent->right = new_node;
	return (new_node);
}
