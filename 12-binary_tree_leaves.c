#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts
 *the leaves in a binary tree
 *
 *@tree: tree
 *Return: result of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* compte des feuilles dans les sous-arbres gauche et droit */
	int left_leaf, right_leaf;

	/* si l'arbre est vide, il n'y a aucune feuille */
	if (tree == NULL)
		return (0);

	/* si le nœud n'a aucun enfant, c'est une feuille */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* nombre de feuilles dans le sous-arbre gauche */
	left_leaf = binary_tree_leaves(tree->left);
	/* nombre de feuilles dans le sous-arbre droit */
	right_leaf = binary_tree_leaves(tree->right);

	/* total des feuilles : feuilles gauche + feuilles droite */
	return (left_leaf + right_leaf);
}
