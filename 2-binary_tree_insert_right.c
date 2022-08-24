#include "binary_trees.h"
/**
 * binary_tree_insert_right-insert node at the right
 * @parent: pointer to the node to insert
 * @value: value to store
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = binary_tree_node(parent, value);

	if (!parent || !right_node)
	{
		free(right_node);
		return (NULL);
	}
	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
