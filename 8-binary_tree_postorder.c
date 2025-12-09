#include "binary_trees.h"

/**
 *binary_tree_postorder - function that goes through a binary tree using
 * post-order traversal
 * @tree: Tree
 * @func: Fonction
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* si l'arbre est vide ou si la fonction est invalide, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* parcourt récursivement le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);
	/* parcourt récursivement le sous-arbre droit */
	binary_tree_postorder(tree->right, func);
	/* applique la fonction au nœud courant */
	func(tree->n);
}
