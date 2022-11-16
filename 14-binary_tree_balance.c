#include "binary_trees.h"
/**
 * HeightL - calculate the height of the left nodes
 * @ROOT: root node
 * Return: int
 */
int HeightL(binary_tree_t *ROOT)
{
	int h = 0;

	if (ROOT == NULL)
	{
		return (-1);
	}
	else
	{
		h = HeightL(ROOT->left) + 1;
	}
	return (h);
}
/**
 * HeightR - calculate the height of the right nodes
 * @ROOT: root node
 * Return: int
 */
int HeightR(binary_tree_t *ROOT)
{
	int h = 0;

	if (ROOT == NULL)
	{
		return (-1);
	}
	else
	{
		h = HeightR(ROOT->right) + 1;
	}
	return (h);
}
/**
 * binary_tree_balance - calculate the balance factore of a tree
 * @tree: pointer to the root node of a tree
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int BF = HeightL(tree) - HeightR(tree);

	return (BF);
}
