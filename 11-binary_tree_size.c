#include "binary_trees.h"
/**
 * binary_tree_size
 * 
 * @tree: pointer to the root node
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    int size1, size2;
    if (!tree)
    {
        return (0);
    }

    size1 = binary_tree_size(tree->left);
    size2 = binary_tree_size(tree->right);
    return (size1 + size2 + 1);
}