#include "binary_trees.h"
/**
 * binary_tree_delete - It frees the entire tree using recursion
 * * @tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
