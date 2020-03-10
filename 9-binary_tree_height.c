#include "binary_trees.h"
/**
* binary_tree_height - function that measures the height of a binary tree
* @tree : is a pointer to the root node of the tree
*
* Return: if tree is null, return 0
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t aux_left = 0, aux_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	aux_left = binary_tree_height(tree->left);
	aux_right = binary_tree_height(tree->right);
	if (aux_left > aux_right)
		return (aux_left + 1);
	else
		return (aux_right + 1);
}
