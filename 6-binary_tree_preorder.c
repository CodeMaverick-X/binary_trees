#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes throug a binary tree
 * using pre order traversal
 * @tree: the pointer to the root node
 * @func: a pointer to a function to call each node,
 * the value on the node must be passed as a parameter
 * to this function
 * Return: nothing on all condition
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
