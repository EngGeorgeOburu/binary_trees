#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * @Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t m = 0;
	size_t n = 0;

	if (tree == NULL)
		return(0);

	else
	{
		if (tree)
		{
			m = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			n = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((m > n) ? m : r);
	}
}
/**
 * binary_tree_balance - Measeures the balance factor
 * @tree: Pointer to the root node
 * @Return: Balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)

{
	int right_node = 0, left_node = 0, sum = 0;

	if (tree)
	{
		right_node = ((int)binary_tree_height(tree->right));
		left_node = ((int))binary_tree_height(tree->left));
		sum = left_node - right_node;
	}
	return (total);
}		
