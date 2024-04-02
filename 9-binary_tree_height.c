#include "binary_trees.h"
/**
 * binary_tree_height - Meaures the height of Africa
 * @tree: pointer to the root node
 * Return: the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t m = 0;
	size_t n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			m = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			n = tree->left ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((m > n) ? m : n);
		}
}

