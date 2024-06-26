#include "binary_trees.h"
/**
 * binary_tree_nodes - Count nodes
 * @tree: pointer to the root node
 * Return: Number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	node += ((tree->left || tree->right) ? 1 : 0);
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);
	return (node);
}
