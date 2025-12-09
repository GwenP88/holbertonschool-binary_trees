#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *
 * @parent: parent of tree
 * @value: integer
 *Return: NULL or new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocation dynamique du nouveau nœud */
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	/* si l'allocation échoue, on retourne NULL */
	if (newNode == NULL)
		return (NULL);

	/* initialisation de la valeur du nœud */
	newNode->n = value;

	/* initialisation des pointeurs enfants à NULL (pas de sous-arbres pour l'instant) */
	newNode->left = NULL;
	newNode->right = NULL;
	/* lien vers le parent passé en argument */
	newNode->parent = parent;

	/* on renvoie le pointeur vers le nouveau nœud créé */
	return (newNode);
}
