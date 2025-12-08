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

binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
func(tree->n);

return;
}
