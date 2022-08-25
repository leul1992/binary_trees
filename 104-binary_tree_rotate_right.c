#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: Pointer to the new root node of the tree once rotated
 *         NULL upon failure
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);
	temp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		temp->left = tree->right;
		tree->right->parent = temp;
	}
	else
		temp->left = NULL;
	temp->parent = tree;
	tree->right = temp;
	if (parent)
		parent->left = tree;
	tree->parent = parent;
	return (tree);
}
