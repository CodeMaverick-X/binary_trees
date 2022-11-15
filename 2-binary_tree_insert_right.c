#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a binary tree node as the right child
 * @parent: parent node
 * @value: the value to be in the node
 * Return: the pointer to the new node created or null on failure
 * or null if the parent is null
 *
 * Desc: if node already ahs left child the new node will take its place
 * and the old right-child must be set as right child of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		if (parent->right == NULL)
		{
			parent->right = node;
			return (node);
		}
		else
		{
			parent->right->parent = node;
			node->right = parent->right;
			parent->right = node;
			return (node);
		}
	}

	return (NULL);
}
