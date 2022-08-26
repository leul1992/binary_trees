#include "binary_trees.h"
/**
 * height-measures height of the binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL || !(tree->left || tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
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
/**
 *pow_calc - returns the value of first raised to the power of second
 *@first: the value to exponentiate
 *@y: the power to raise first to
 *Return: first to the power of second, or -1 if second is negative
 */

int pow_calc(int first, int second)
{
	if (second < 0)
		return (-1);
	if (second == 0)
		return (1);
	else
		return (first * pow_calc(first, second - 1));

}
/**
 * binary_tree_is_perfect-check if perfect binary tree
 * @tree: pointer to the root of the tree
 * Return: 1(success) or 0(failure)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)pow_calc(2, height + 1);
	return (power - 1 == nodes);
}
