#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * If tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* si l'arbre est vide ou si la fonction est invalide, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* parcours récursif du sous-arbre gauche */
	binary_tree_inorder(tree->left, func);
	/* application de la fonction au nœud courant */
	func(tree->n);
	/* parcours récursif du sous-arbre droit */
	binary_tree_inorder(tree->right, func);
}
