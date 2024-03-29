#include "binary_trees.h"
/**
 * binary_tree_insert_left - Adds a new node to the left of the parent
 * if it exists it move down one level and add th new node first
 * @parent: parent node
 * @value: node value
 * Return: NULL if fails or new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
