#include "binary_trees.h"
/**
* height_perfect - function that checks if a binary tree is perfect
* @tree:  is a  node of the tree of the tree to check
*
* Return: height
**/
int height_perfect(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;
if (!tree)
{
return (0);
}
left_h = height_perfect(tree->left);
right_h = height_perfect(tree->right);
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
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree:  is a  node of the tree of the tree to check
*
* Return: if tree is null, return 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if ((((binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right)) == 1)
&& (height_perfect(tree->left) == height_perfect(tree->right)))
|| (!tree->left && !tree->right))
{
return (1);
}
return (0);
}
