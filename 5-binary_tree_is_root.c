#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: is a pointer to the node to check
 * Return: 1 if node is a root
 * or 0 if node is NUll
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* si le nœud n'existe pas, il ne peut pas être racine */
	if (node == NULL)
		return (0);

	/* un nœud est racine s'il n'a pas de parent */	
	if (node->parent == NULL)
		return (1);
	
	/* sinon, ce n'est pas une racine */
	return (0);
}
