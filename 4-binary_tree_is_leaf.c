#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checkss if a node is leaf
 * @node: node to check if its leaf
 * Return: 1 if node is a leaf an d 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
