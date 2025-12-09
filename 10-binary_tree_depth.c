#include "binary_trees.h"

/**
 *binary_tree_depth - function that measures the
 * depth of a node in a binary tree
 *@tree: Tree
 *
 * Return: Depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* compteur de profondeur, initialisé à 0 */
	size_t depth = 0;

	/* si le nœud est NULL, la profondeur est 0 */
	if (tree == NULL)
		return (0);

	/* remonte de parent en parent jusqu'à la racine */
	while (tree->parent != NULL)
	{
		/* on incrémente la profondeur à chaque niveau */
		depth++;
		/* on passe au parent du nœud courant */
		tree = tree->parent;
	}
	/* on renvoie la profondeur calculée */
	return (depth);
}
