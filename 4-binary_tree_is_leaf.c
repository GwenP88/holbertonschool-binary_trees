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
	/* si le nœud est NULL, il ne peut pas être une feuille */
	if (node == NULL)
		return (0);
	{	
		/* si le nœud n'a ni enfant gauche ni enfant droit, c'est une feuille */
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	/* sinon, le nœud n'est pas une feuille */
	return (0);
}
