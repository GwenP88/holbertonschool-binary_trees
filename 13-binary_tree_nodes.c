#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes
 * If tree is NULL return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_left, node_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	node_left = binary_tree_nodes(tree->left);
	node_right = binary_tree_nodes(tree->right);

	return (1 + node_left + node_right);
}
