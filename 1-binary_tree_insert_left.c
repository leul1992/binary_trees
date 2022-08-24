#include "binary_trees.h"
/**
 * binary_tree_insert_left- inserts a node at the left-child
 * @parent: a pointer to the node to insert the child
 * @value: the value to be inserted
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = binary_tree_node(parent, value);

	if (left_node == NULL || parent == NULL)
	{
		free(left_node);
		return (NULL);
	}

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
