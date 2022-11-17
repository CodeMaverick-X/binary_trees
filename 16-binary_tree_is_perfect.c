#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of a tree
 * @tree: pointer to nodes
 * Return: int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
/**
 * is_perfect - check if tree is perfect
 * @node: root node
 * @d: depth of tree
 * @level: next phase
 * Return: integer
 */
int is_perfect(binary_tree_t *node, int d, int level)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
	{
		int val = d == level + 1 ? 1 : 0;

		return (val);
	}
	if (node->left == NULL || node->right == NULL)
		return (0);
	return (is_perfect(node->left, d, level + 1) &&
		       is_perfect(node->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - return 1 if tree is perfect and 0 otherwise
 * @tree: root node
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}
