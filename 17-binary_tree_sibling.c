#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the pointer to find the sibling
 * Return: pointer to the siblng node
 * Desc: if node is null or poarent is null, return null
 * if node has no sibling. return null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		sibling = parent->right;
	else
		sibling = parent->left;


	return (sibling);
}
