#include "binary_trees.h"
/**
 * bst_search- searches a value
 *
 * @tree: pointer to the root node
 * @value: value to search for
 * Return: pointer to the value found or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *temp = (bst_t *)tree;

	if (!tree)
	{
		return (NULL);
	}
	while (temp)
	{
		if (temp->n == value)
			return (temp);
		if (value > temp->n)
			temp = temp->right;
		else if (value < temp->n)
			temp = temp->left;
	}
	return (NULL);
}
