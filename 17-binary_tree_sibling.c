#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 * or NUll if node or parent is null
 * or NULL if the node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	if (parent->left == node)
	{
		sibling = parent->right;
		if (parent->right != NULL)
			return (sibling);
		return (NULL);
	}
	else if (parent->right == node)
	{
		sibling = parent->left;
		if (parent->left != NULL)
			return (sibling);
		return (NULL);
	}
	return (NULL);
}
