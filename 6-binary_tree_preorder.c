#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree
 * @tree : Is a pointer to hte root node fo the tree to traverse
 * @func : Is a pointer to a funciton to call for each node.
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
