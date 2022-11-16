#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of binary tree
 * @tree: pointer to the root node to measure
 * Return: size of tree or 0 on error
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	size += 1;

	return (size);
}
