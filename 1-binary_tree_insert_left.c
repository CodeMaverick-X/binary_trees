#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a binary tree node as the left child
 * @parent: parent node
 * @value: the value to be in the node
 * Return: the pointer to the new node created or null on failure
 * or null if the parent is null
 *
 * Desc: if node already has left child the new node will take its place
 * and the old right-child must be set as the left-child of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	if (parent != NULL)
	{
		if (parent->left == NULL)
		{
			parent->left = node;
			return (node);
		}
		else
		{
			parent->left->parent = node;
			node->left = parent->left;
			parent->left = node;
			return (node);
		}
	}

	return (NULL);
}
