#include "binary_trees.h"
/**
 * binary_tree_delete-delete- delete entire binary tree
 * @tree: pointer to the root node of the tree
 * if tree NULL do nothing
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	while (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
		return;
	}
}
