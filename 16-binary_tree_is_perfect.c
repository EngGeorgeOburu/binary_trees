#include "binary_trees.h"
/**
 * binary_tree_height - Measures height
 * @tree: pointer to the node of the root
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_he, right_he;

	if (tree == NULL)
		return (0);
	left_he = binary_tree_height(tree->left);
	right_he = binary_tree_height(tree->right);

	return (1 + (left_he > right_he ? left_he : right_he));

/**
 * tree_is_perfect - Checks if a tree is perfect
 * @tree: Pointer to node
 * Return: 0 if not perfect or other number
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, i;
	size_t perfect_nodes = 1;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);


	for (i = 0; i < height; i++)
		perfect_nodes *= 2;
	return (perfect_nodes - 1 == binary_tree_size(tree) ? 1 : 0);
}
