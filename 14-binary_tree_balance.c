#include "binary_trees.h"
/**
 * height-measures height of the binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree
 */
int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL || !(tree->left || tree->right))
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance- measures the balance factor
 * @tree: pointer to the root node
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	left = height(tree->left) + (tree->left ? 1 : 0);
	right = height(tree->right) + (tree->right ? 1 : 0);

	return (left - right);
}
