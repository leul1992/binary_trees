#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (help_tree(tree, 0, size));
}

/**
 * help_tree - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int help_tree(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (help_tree(tree->left, 2 * index + 1, size) &&
		help_tree(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size- find size of binary tree
 *
 * @tree: pointer to the root node
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size1, size2;

	if (!tree)
	{
		return (0);
	}

	size1 = binary_tree_size(tree->left);
	size2 = binary_tree_size(tree->right);
	return (size1 + size2 + 1);
}
