#include "binary_trees.h"
int get_node_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree node.
 * @tree: A pointer to the root
 *
 * Return: integer or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	/* si le nœud est NULL, on considère un équilibre neutre (0) */
	if (tree == NULL)
		return (0);

	/* différence entre la hauteur du sous-arbre gauche et celle du sous-arbre droit */
	return (get_node_height(tree->left) - get_node_height(tree->right));
}

/**
 * get_node_height - Calculates the height of a binary tree recursively.
 * @tree: A pointer to the root
 *
 * Return: The height of the tree.
 */

int get_node_height(const binary_tree_t *tree)
{
	/* hauteurs des sous-arbres gauche et droit */
	int height_left, height_right;

	/* si le nœud est NULL, hauteur -1 (convention pour faciliter le calcul) */
	if (tree == NULL)
		return (-1);

	/* hauteur du sous-arbre gauche */
	height_left = get_node_height(tree->left);
	/* hauteur du sous-arbre droit */
	height_right = get_node_height(tree->right);

	/**
	 * (height_left > height_right) : comparaison des deux hauteurs
	 * ? height_left : si height_left est la plus grande alors on prend height_left
	 * : height_right sinon on prend la droite
	 * retourne 1 + la plus grande des deux hauteurs (on remonte d'un niveau) 
	 */
	return (1 + ((height_left > height_right) ? height_left : height_right));
}
