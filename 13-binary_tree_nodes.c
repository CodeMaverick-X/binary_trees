#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes with at least
 * one child in a binary tree
 * @tree: pointer to the root node to measure
 * Return: size of tree or 0 on error
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		size += 1;

	return (size);
}
