#include "binary_trees.h"
/**
 * binary_tree_postorder- traverse post-order
 * @tree: a pointer to the root node
 * @func: a pointer to the print function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
