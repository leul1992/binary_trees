#include "binary_trees.h"
#include <stdio.h>

/**
 * max - finds maximum of two number
 * @s1: integer
 * @s2: integer
 * Return: maximum of s1 and s2
 */
int max(int s1, int s2)
{
	return (s1 > s2 ? s1 : s2);
}

/**
 * height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: height of tree if tree is null retrun 0
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL || !(tree->left || tree->right)) /* if leaf node */
		return (0);
	return (max(height(tree->left), height(tree->right)) + 1);
}

/**
 * binary_tree_balance - measures the balance of the tree
 * @tree: a pointer to the root node of the tree
 * Return: balance of tree. if tree is null retrun 0;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left) + (tree->left ? 1 : 0);
	right_height = height(tree->right) + (tree->right ? 1 : 0);
	return (left_height - right_height);
}