#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of the binary tree
 * @tree: pointer to the root node
 * Return: Size if successful , unless 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, m = 0, n = 0;

	if (tree == NULL)
		return (0);

	n = binary_tree_size(tree->left);
	m = binary_tree_size(tree->right);
	size = n + m + 1;
	return (size);
}
