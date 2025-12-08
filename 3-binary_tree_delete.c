#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: nothing, void function
 * If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* si l'arbre est vide, rien à faire */
	if (tree == NULL)
		return;

	/* appel récursif de la focntion pour remonter jusqu'à la racine */
	/* suppression récursive du sous-arbre gauche */
	binary_tree_delete(tree->left);

	/* suppression récursive du sous-arbre droit */
	binary_tree_delete(tree->right);

	/* libération du nœud courant après ses enfants */
	free(tree);
}
