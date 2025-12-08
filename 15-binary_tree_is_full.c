#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if is full, otherwise 0;
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	/* Si l'arbre est vide, il n'est pas considéré comme full */
	if (tree == NULL)
		return (0);

	/* Si le nœud est une feuille, il respecte la condition (0 enfant) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si le nœud a exactement un seul enfant, l'arbre n'est pas full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Vérifier récursivement si le sous-arbre gauche est full */
	full_left = binary_tree_is_full(tree->left);
	/* Vérifier récursivement si le sous-arbre droit est full */
	full_right = binary_tree_is_full(tree->right);

	/* L'arbre est full seulement si gauche ET droite sont full */
	return (full_left && full_right);
}
