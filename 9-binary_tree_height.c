#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: the size of the tree
 * If tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right, tree_height;

	/* si l'arbre est vide, sa hauteur est 0 */
	if (tree == NULL)
		return (0);

	/* si le nœud est une feuille, la hauteur est 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* hauteur du sous-arbre gauche */
	height_left = binary_tree_height(tree->left);
	/* hauteur du sous-arbre droit */
	height_right = binary_tree_height(tree->right);

	/* sélectionne la hauteur la plus grande entre les deux */
	if (height_left > height_right)
		tree_height = height_left;
	else
		tree_height = height_right;

	/* la hauteur finale est la hauteur max + 1 (on remonte d'un niveau) */
	return (1 + tree_height);
}
