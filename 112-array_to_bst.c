#include "binary_trees.h"
/**
 * array_to_bst-builds a BST from an array
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * Return: root node of the created BST or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t arr = 0;

	while (arr < size)
	{
		bst_insert(&root, array[arr]);
		arr++;
	}
	return (root);
}
