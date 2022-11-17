#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of the tree to check
 * Return: 0 if tree is 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l = 0;
	int full_r = 0;

	if (tree == NULL)
		return (0);

	full_r = binary_tree_is_full(tree->right);
	full_l = binary_tree_is_full(tree->left);

	if (tree->right == NULL && tree->left)
		full_r = 0;
	if (tree->left == NULL && tree->right)
		full_l = 0;
	if (tree->left == NULL && tree->right == NULL)
	{
		full_l = 1;
		full_r = 1;
	}

	if (full_l >= 1 && full_r >= 1)
		return (1);
	else
		return (0);
}
