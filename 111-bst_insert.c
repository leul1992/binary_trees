#include "binary_trees.h"
/**
 * bst_insert-inserts a value in a bst
 *
 * @tree: double pointer to the root node of bst
 * @value: the value to be added
 * Return: new tree or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp, *temp1, *new = NULL;

	if (!tree)
	{
		return (NULL);
	}
	if (*tree == NULL)
	{
		return (*tree = binary_tree_node(NULL, value));
	}
	temp = *tree;
	while (temp)
	{
		temp1 = temp;
		if (temp->n < value)
			temp = temp->right;
		else if (temp->n > value)
			temp = temp->left;
		else if (value == temp->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (temp1 == NULL)
		temp1 = new;
	else if (value < temp1->n)
	{
		temp1->left = new;
		new->parent = temp1;
	}
	else
	{
		temp1->right = new;
		new->parent = temp1;
	}
	return (new);
}
