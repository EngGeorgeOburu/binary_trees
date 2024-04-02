#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaf in a binary tree
 * @tree: Pointer to the root node
 * Return: Number of leafs, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf, m = 0, n = 0;

	if (tree == NULL)
		return (0);
	m = binary_tree_size(tree->left);
	n = binary_tree_size(tree->right);
	leaf = m + n;
	return ((!m && !n) ? leaf + 1 : leaf + 0);
}
