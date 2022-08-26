#include "binary_trees.h"
/**
 * bst_help - checks if a binary tree is a valid BST
 * @tree: pointer to the root node
 * @min: Lower bound of checked nodes
 * @max: Upper bound of checked nodes
 * Return: 1(success) or 0(failure)
 */
int bst_help(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (bst_help(tree->left, min, tree->n - 1) &&
		bst_help(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid BST
 * @tree: pointer to the root node
 * Return: 1(success) or 0(failure)
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_help(tree, INT_MIN, INT_MAX));
}

