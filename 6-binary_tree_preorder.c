#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a
 *  binary tree using pre-order traversal
 * @tree: Tree
 * @func: Fonction
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* si l'arbre est vide ou si la fonction est invalide, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* applique la fonction au nœud courant */
	func(tree->n);
	/* parcourt récursivement le sous-arbre gauche */
	binary_tree_preorder(tree->left, func);
	/* parcourt récursivement le sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
