#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *
 * @parent: parent of tree
 * @value: integer
 *Return: NULL or new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
