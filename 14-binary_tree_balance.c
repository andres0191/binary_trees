#include "binary_trees.h"
/**
* height_balance - height of a binary tree balance
* @tree:  is a  node of the tree to measure the balance factor
* Return: height of the tree
*/
int height_balance(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;
if (!tree)
{
return (0);
}
left_h = height_balance(tree->left);
right_h = height_balance(tree->right);
if (right_h < left_h)
{
return (left_h + 1);
}
else
{
return (right_h + 1);
}
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree :  is a  node of the tree to measure the balance factor
*
* Return: if tree is null, return 0
**/
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
return (height_balance(tree->left) - height_balance(tree->right));
}
