#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts
 *the leaves in a binary tree
 *
 *@tree: tree
 *Return: result of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
int left_leaf, right_leaf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}
