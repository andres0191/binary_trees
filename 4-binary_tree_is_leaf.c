#include "binary_trees.h"
/**
* binary_tree_is_leaf - Function that checks if a nodes is a leaf
* @node: Is a pointer to the node to check
*
* Return: 1 if node is a leaf, or 0 if node is Null
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	else
		return (1);
}
