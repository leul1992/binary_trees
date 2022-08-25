#include "binary_trees.h"
/**
 * node_help - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void node_help(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		node_help(tree->left, func, level - 1);
		node_help(tree->right, func, level - 1);
	}
}
/**
 * height-measures height of the binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree || !(tree->left || tree->right))
		return (0);
	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_levelorder- traverse in level-order
 *
 * @tree: pointer to the root node
 * @func: pointer to print function
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func){};

	maxlevel = height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		node_help(tree, func, level);
}
