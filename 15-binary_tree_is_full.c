#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: tree to check
 * @Return: 1 if full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (tree == NULL)
		return(0);

	else
	{
		if(tree->left && tree->right)
		{
			left_node = binary_tree_is_full(tree->left);
			right_node = binary_tree_is_full(tree->right);

			if (tree != NULL)
				return (1);
		}
		else if(!tree->left_node && !tree->right_node)
			return(1);
		else
			return(0);
	}
}
