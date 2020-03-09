#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/*Function to print binary tree ↓*/
void binary_tree_print(const binary_tree_t *tree);
typedef struct binary_tree_s binary_tree_t;
/*Binary search tree ↓*/
typedef struct binary_tree_s bst_t;
/*AVL Tree ↓*/
typedef struct binary_tree_s avl_t;
/*Max Binary Heap ↓*/
typedef struct binary_tree_s heap_t;
/*Prototype task 0 New node ↓*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*prototype task 1 insert left ↓*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*prototype task 2 insert right ↓*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*prototype task 3 delete ↓*/
void binary_tree_delete(binary_tree_t *tree);
/*prototype task 4 is leaf ↓*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*prototype task 5 is root ↓*/
int binary_tree_is_root(const binary_tree_t *node);
/*prototype task 6 pre-order traversal ↓*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*prototype task 7 in-order traversal ↓*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*prototype task 8 post-order traversal ↓*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*prototype task 9 Height ↓*/
size_t binary_tree_height(const binary_tree_t *tree);
/*prototype task 10 Depth ↓*/
size_t binary_tree_depth(const binary_tree_t *tree);
/*prototype task 11 size ↓*/
size_t binary_tree_size(const binary_tree_t *tree);
/*prototype task 12 ↓*/
size_t binary_tree_leaves(const binary_tree_t *tree);
/*prototype task 13 nodes ↓*/
size_t binary_tree_nodes(const binary_tree_t *tree);
/*prototype task 14 balance factor ↓*/
int binary_tree_balance(const binary_tree_t *tree);
/*prototype task 15 is full ↓*/
int binary_tree_is_full(const binary_tree_t *tree);
/*prototype task 16 is perfect ↓*/
int binary_tree_is_perfect(const binary_tree_t *tree);
/*prototype task 17 Sibling ↓*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/*prototype task 18 Uncle ↓*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif