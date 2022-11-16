#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of the binary
 * tree
 * @tree: pointer to the root node
 * Return: return the height or return 0 if root is 0 and
 * otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;
	size_t max = 0;

	if (tree == NULL)
		return (-1);


	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	/**Ternary operator*/
	max = height_l >= height_r ? height_l + 1 : height_r + 1;


	return (max);
}
