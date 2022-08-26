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
    if (!*tree)
    {
        return (*tree = binary_tree_node(NULL, value));
    }
    else
    {
        if (value == *tree->n)
            return;
        while (*tree)
        {
            if (*tree->n < value)
                *tree = *tree->right;
            else if (*tree->n > value)
                *tree = *tree->left;
        }
        *tree->n = value;
    }
    return (*tree);
}