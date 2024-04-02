#include "binary_trees.h"
/**
 * binary_tree_sibling - Find the sibling node
 * @node: Pointer to the node tofind sibling
 * Return: Pointer(successful), else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
