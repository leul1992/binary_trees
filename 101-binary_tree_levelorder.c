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
 * height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;

	if (!tree)
		return (0);

	h1 = tree->left ? 1 + height(tree->left) : 0;
	h2 = tree->right ? 1 + height(tree->right) : 0;
	return (h1 > h2 ? h1 : h2);
}

/**
 * binary_tree_levelorder - traverst a binary tree using level-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		node_help(tree, func, level);
}
