#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* pointeur vers le nouveau fils gauche et vers l'ancien fils gauche */
	binary_tree_t *new_left, *old_left;

	/* si le parent est NULL, on ne peut rien insérer */
	if (parent == NULL)
		return (NULL);

	/* allocation du nouveau nœud */
	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	/* initialisation de la valeur du nouveau nœud */
	new_left->n = value;

	/* on sauvegarde l'ancien fils gauche du parent */
	old_left = parent->left;

	/* on relie le nouveau nœud à son parent */
	new_left->parent = parent;

	/* le nouveau nœud pointe vers l'ancien fils gauche (sous-arbre décalé) */
	new_left->left = old_left;

	/* le fils droit du nouveau nœud est vide */
	new_left->right = NULL;

	/* le parent pointe maintenant vers le nouveau nœud comme fils gauche */
	parent->left = new_left;

	/* si un ancien fils gauche existait,
	 * on met à jour son parent pour qu'il pointe vers le nouveau nœud
	 */
	if (old_left != NULL)
		old_left->parent = new_left;

	/* on retourne le pointeur vers le nouveau nœud inséré */
	return (new_left);
}
