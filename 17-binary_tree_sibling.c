#include "binary_trees.h"
/**
 * binary_tree_sibling-finds sibling of a node
 *
 * @node: pointer to the node to find sibling
 * Return: pointer to the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else if (node->parent->left == NULL)
		return (NULL);
	return (node->parent->left);
}
