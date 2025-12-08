#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child, *old_right;

	if (parent == NULL)
		return (NULL);

	new_right_child = malloc(sizeof(binary_tree_t));
	if (new_right_child == NULL)
		return (NULL);

	new_right_child->n = value;

	old_right = parent->right;
	new_right_child->parent = parent;
	new_right_child->right = old_right;
	new_right_child->left = NULL;
	parent->right = new_right_child;

	if (old_right != NULL)
		old_right->parent = new_right_child;

	return (new_right_child);
}
