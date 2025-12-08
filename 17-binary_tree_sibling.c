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

	/* Si le nœud est NULL → pas de sibling possible */
	if (node == NULL)
		return (NULL);

	/* Récupérer le parent du nœud */
	parent = node->parent;

	/* Si le nœud n'a pas de parent → il est racine → pas de sibling */
	if (parent == NULL)
		return (NULL);

	/* Si le nœud est l'enfant gauche du parent */
	if (parent->left == node)
	{
		/* Le sibling potentiel est l'enfant droit */
		sibling = parent->right;
		/* Retourner le sibling s'il existe, sinon NULL */
		if (sibling != NULL)
			return (sibling);
		return (NULL);
	}
	/* Si le nœud est l'enfant droit du parent */
	else if (parent->right == node)
	{
		/* Le sibling potentiel est l'enfant gauche */
		sibling = parent->left;
		/* Retourner le sibling s'il existe, sinon NULL */
		if (sibling != NULL)
			return (sibling);
		return (NULL);
	}
	/* Cas de sécurité : nœud non reconnu comme enfant du parent */
	return (NULL);
}
