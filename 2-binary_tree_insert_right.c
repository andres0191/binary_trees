#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node
 * as the left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
if (parent == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;

if (parent->right == NULL)
{
parent->right = new_node;
new_node->parent = parent;
}
else
{
parent->right->parent = new_node;
new_node->parent = parent;
parent->right = new_node;
new_node->right = parent->right;
}

return (new_node);
}
