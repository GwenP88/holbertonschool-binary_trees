#include "binary_trees.h"

/**
 *binary_tree_uncle -function that finds the uncle of a node
 *
 *@node: node
 *Return: Uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* pointeur vers le parent (p) et le grand-parent (g) */
	binary_tree_t *p, *g;

	/* si le nœud est NULL, il n'a pas d'oncle */
	if (node == NULL)
		return (NULL);

	/* récupération du parent du nœud */
	p = node->parent;

	/* si le parent n'existe pas, il n'y a pas d'oncle */
	if (p == NULL)
		return (NULL);

	/* récupération du grand-parent du nœud */
	g = node->parent->parent;

	/* si le grand-parent n'existe pas, il n'y a pas d'oncle */
	if (g == NULL)
		return (NULL);

	/* si le parent est le fils gauche du grand-parent,
	 * l'oncle est le fils droit
	 */
	if (p == g->left)
		return (g->right);

	/* sinon, le parent est le fils droit et l'oncle est le fils gauche */
	else
		return (g->left);
}
