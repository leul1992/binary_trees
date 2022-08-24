#include "binary_trees.h"
/**
 * binary_tree_node- creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: the value to put in the new node
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = (binary_tree_t *)
		malloc(sizeof(binary_tree_t));

	if (temp != NULL)
	{
		temp->n = value;
		temp->left = temp->right = NULL;
		temp->parent = parent;
	}
	return (temp);
}
