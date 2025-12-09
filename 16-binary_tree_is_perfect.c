#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 *binary_tree_is_perfect - function that
 *checks if a binary tree is perfect
 *@tree: Tree
 *
 *Return: 0 if is tree not perfect and 1 if is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* hauteurs des sous-arbres gauche et droit */
	int height_right, height_left;

	/* un arbre vide n'est pas considéré comme parfait */
	if (tree == NULL)
		return (0);
	
	/* une feuille (aucun enfant) est un arbre parfait de hauteur 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* si le nœud a un enfant gauche mais pas d'enfant droit, ce n'est pas parfait */
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	/* si le nœud a un enfant droit mais pas d'enfant gauche, ce n'est pas parfait */
	if (tree->left == NULL && tree->right != NULL)
		return (0);

	/* calcul de la hauteur du sous-arbre gauche */
	height_left = binary_tree_height(tree->left);
	/* calcul de la hauteur du sous-arbre droit */
	height_right = binary_tree_height(tree->right);

	/* si les hauteurs des deux sous-arbres sont différentes, ce n'est pas parfait */
	if (height_left != height_right)
		return (0);

	/* l'arbre est parfait si les deux sous-arbres sont eux-mêmes parfaits */
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: is a pointer to the root node of the tree to traverse
 * Return: the size of the tree
 * If tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* hauteurs des sous-arbres gauche, droit, et hauteur retenue */
	size_t height_left, height_right, tree_height;

	/* si l'arbre (ou le nœud) est NULL, la hauteur est 0 */
	if (tree == NULL)
		return (0);

	/* calcul récursif de la hauteur du sous-arbre gauche */
	height_left = binary_tree_height(tree->left);
	/* calcul récursif de la hauteur du sous-arbre droit */
	height_right = binary_tree_height(tree->right);

	/* on récupère la hauteur la plus grande entre gauche et droite */
	if (height_left > height_right)
		tree_height = height_left;
	else
		tree_height = height_right;

	/* on ajoute 1 pour compter le niveau du nœud courant */
	return (1 + tree_height);
}

