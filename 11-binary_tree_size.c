#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: the size of the tree
 * If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	/* si l'arbre est vide, sa taille est 0 */
	if (tree == NULL)
		return (0);

	/* taille du sous-arbre gauche */
	size_left = binary_tree_size(tree->left);
	/* taille du sous-arbre droit */
	size_right = binary_tree_size(tree->right);

	/* taille totale = 1 (nœud courant) + taille gauche + taille droite */
	return (1 + size_left + size_right);
}
