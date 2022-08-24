#include "binary_trees.h"
/**
 * binary_tree_is_leaf-check if node is leaf or not
 * @node: pointer to the node to check
 * Return: 1(success) or 0(failure)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node->left || node->right || !node)
	{
		return (0);
	}
	return (1);
}
