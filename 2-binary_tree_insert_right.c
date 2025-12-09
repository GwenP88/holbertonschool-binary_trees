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
	/* pointeurs vers le nouveau fils droit et l'ancien fils droit */
	binary_tree_t *new_right, *old_right;

	/* si le parent est NULL, l'insertion est impossible */
	if (parent == NULL)
		return (NULL);

	/* allocation du nouveau nœud */
	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);

	/* initialisation de la valeur du nouveau nœud */
	new_right->n = value;

	/* sauvegarde de l'ancien fils droit du parent */
	old_right = parent->right;
	/* lien du nouveau nœud avec son parent */
	new_right->parent = parent;
	/* le nouveau nœud devient le parent de l'ancien fils droit */
	new_right->right = old_right;
	/* le fils gauche du nouveau nœud est vide */
	new_right->left = NULL;
	/* le parent pointe maintenant sur le nouveau nœud comme fils droit */
	parent->right = new_right;

	/* si un ancien fils droit existait, on met à jour son parent */
	if (old_right != NULL)
		old_right->parent = new_right;

	/* on retourne le nouveau nœud inséré */
	return (new_right);
}
