#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes
 * If tree is NULL return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left, node_right;

	/* si l'arbre est vide, il n'y a aucun nœud à compter */
	if (tree == NULL)
		return (0);

	/* si le nœud est une feuille (aucun enfant), il ne compte pas */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* nombre de nœuds internes dans le sous-arbre gauche */
	node_left = binary_tree_nodes(tree->left);
	/* nombre de nœuds internes dans le sous-arbre droit */
	node_right = binary_tree_nodes(tree->right);

	/* on compte le nœud courant (1) + ceux du sous-arbre gauche + ceux du sous-arbre droit */
	return (1 + node_left + node_right);
}
