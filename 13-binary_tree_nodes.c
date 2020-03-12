#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree :  is a  node of the tree to count the number of nodes
*
* Return: if tree is null, return 0
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}
