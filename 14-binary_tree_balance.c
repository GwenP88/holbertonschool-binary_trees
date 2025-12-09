#include "binary_trees.h"
int get_node_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree node.
 * @tree: A pointer to the root
 *
 * Return: integer or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_node_height(tree->left) - get_node_height(tree->right));
}

/**
 * get_node_height - Calculates the height of a binary tree recursively.
 * @tree: A pointer to the root
 *
 * Return: The height of the tree.
 */

int get_node_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (-1);

	height_left = get_node_height(tree->left);
	height_right = get_node_height(tree->right);

	return (1 + ((height_left > height_right) ? height_left : height_right));
}
