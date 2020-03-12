#include "binary_trees.h"
/**
* binary_tree_sibling - function that finds the sibling of a node
* @node :  is a  node to find the sibling
*
* Return: if node is null, return null
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
