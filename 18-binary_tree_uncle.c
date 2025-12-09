#include "binary_trees.h"

/**
 *binary_tree_uncle -function that finds the uncle of a node
 *
 *@node: node
 *Return: Uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *p, *g;

if (node == NULL)
return (NULL);
p = node->parent;
if (p == NULL)
return (NULL);

g = node->parent->parent;
if (g == NULL)
return (NULL);

if (p == g->left)
return (g->right);

else
return (g->left);

}
