#include "binary_trees.h"
/**
* binary_tree_is_full - function that checks if a binary tree is full
* @tree :  is a  node of the tree of the tree to check
*
* Return: if tree is null, return 0
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
