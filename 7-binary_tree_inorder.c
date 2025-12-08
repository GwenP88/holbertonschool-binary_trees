#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree 
 * using in-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * @int: The value of the node to be passed as a parameter to this function
 * Return: nothing, void function
 * If tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	
}