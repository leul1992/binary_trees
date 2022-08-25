#include "binary_trees.h"
/**
 * binary_tree_nodes- counts the non-leaves in binary tree
 *
 * @tree: pointer to the root node
 * Return: count of leaves or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}
