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
	binary_tree_t *new_right, *old_right;

	if (parent == NULL)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);

	new_right->n = value;

	old_right = parent->right;
	new_right->parent = parent;
	new_right->right = old_right;
	new_right->left = NULL;
	parent->right = new_right;

	if (old_right != NULL)
		old_right->parent = new_right;

	return (new_right);
}
