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
int height_right, height_left;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left != NULL && tree->right == NULL)
return (0);

if (tree->left == NULL && tree->right != NULL)
return (0);

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);

if (height_left != height_right)
return (0);

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
	size_t height_left, height_right, tree_height;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		tree_height = height_left;
	else
		tree_height = height_right;

	return (1 + tree_height);
}

