#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaf node
 * @tree: pointer to the root node
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		int x = binary_tree_leaves(tree->left);
		int y = binary_tree_leaves(tree->right);

		return (x + y);
	}
}
