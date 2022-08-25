#include "binary_trees.h"
/**
 * binary_tree_uncle-find the uncle of a node
 *
 * @node: pointer to the node to find uncle
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		return (node->parent->parent->right);
	}
	if (node->parent->parent->left == NULL)
		return (NULL);
	return (node->parent->parent->left);

}
