#include "binary_trees.h"
/**
 * binary_tree_inorder - It goes through a binary tree using in-order traversal
 * @tree: pointer to the root node to
 * @func: pointer to function to call for each node
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func) (int));
{
	if (tree == NULL || func == NULL)
		return;
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}