#include "binary_trees.h"

/**
 *binary_tree_is_leaf - function that checks if a node is a leaf
 *
 *@node: node to check
 *
 *Return: a pointer to the created node,
 *or NULL on failure or if parent is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
