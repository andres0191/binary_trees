# BINARY TREE

[image of binary tree](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcRWayBb1E3A1DQjFAaSMqJ3DN8BbAHzhUitGZ49aTtn_Vd9V6yQ)

A binary tree is a tree data structure in which each node has a maximum of two children, which is called a left and right fact. A recursive definition that uses set theory news is a non-empty binary tree is a tuple, where left and right are binary trees or the empty set and the result S is a singleton set. A binary tree can also be called a bifurcating tree, a term that appears in some very old programming books. It is also possible to interpret a binary tree as a non-directed, rather than directed, graphic, in which case a binary tree is more an ordered and rooted tree. Rooted binary tree is used instead of binary tree to emphasize the fact that the tree is rooted, but as defined above, a binary tree is always rooted.
Binary trees are used in two different ways:

1. as a means to access the nodes based on some value or tag associated with each node. Tagged binary trees in this range are used to implement binary search trees and binary heaps, and used to search and sort efficiently.

2. As a representation of data with a relevant bifurcating structure. In such cases, the particular arrangement of the nodes below and / or to the left or right of other nodes is part of the information, this means that if it is changed, the meaning would change.

*************** Types of binary tree: ***************

* Rooted: It has a root node and each node has a maximum of two children

* Complete: each node has 0 or 2 children. Another way to define a complete tree is a recursive definition. This type of tree has only one vertex or is a tree whose root node has two subtrees, which are complete binary trees.

* Perfect: All interior nodes have two children and all leaves have the same depth or level.

* Full Infinity: Each node has two children. the set of all nodes is infinitely countable, but the set of all infinite paths from the root is uncountable, having the cardinality of the continuum.

* Balanced: The left and right subtrees of each node differ in height in noas of 1.

* Degenerated: It is where each parent node has only one associated child node. This means that the tree behaves like a linked list data structure.

The tree represents the nodes connected by edges. Binary tree is a special data structure that is used for data storage. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of an ordered matrix and a linked list, since the search is as fast as in an ordered matrix and the operation of insertion or elimination is as fast as in a linked list.

***************  Terminology:  ***************

* Path: Refers to the sequence of nodes along the edges of a tree.

* Root: The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

* Parent: Any node, except the root node, has an edge facing up to a node called father.

* Child: The node under a given node is granted by its downward edge.

* Leaf: the node that has no child node.

* Subtree: The subtree represents the descendants of a node.

* Visiting: They refer to verifying the value of a node when it controls the node.

* Traversing: Pass through the nodes in a specific order.

* Levels: Represents the generation of a node. If the root node is at level 0, its next child node is at level 1, its niteo is at level 2 and so on.

* Keys: They represent a value of a node based on which a search operation will be performed for a node.

***Binary search trees*** or ordered binary trees, are a particular type of container: A data structure that stores the elements (numbers, records, names, etc.) in memory. They allow an additional search and rapid elimination of elements and can be used to implement dynamic sets of elements or search links that allow you to find an element by its key (eg find a person's tel number x the name).
Binary search trees keep their keys in order, so that the search and other operations can use the binary search principle: when they look for a key in a tree (or a place to insert a new key), they cross the tree from the root to the leaf, making comparisons with the keys stored in the nodes of the tree and deciding, based on the comparison, to continue looking at the left or right subtrees. On average, this means that each comparison allows operations to jump around the middle of the tree, so that each search, insertion or deletion takes time proportional to the algorithm of the number of items stored in the tree.

The Binary search trees exhibits special behavior. the left sequential element of a node must have a value less than the primary value and the right secondary element of the node must have a value greater than its primary value.

		     	27
		       *   *
		      *     *
		     *       *
	        *         *
	      14		  35
	      * *          * *
	     *   *        *   *
	    10   19      31    42

Tree Node:
The code to write a tree node must have a part of data and references to its left and right secondary nodes:

```
structure node{
	int data;
	struct node *leftChild;
	struct node *rightChild;
};
```
***Note:*** In a tree, all nodes share a common construction.
The basic operations that can be performed in a binary search tree data structure are the following:

* Insert: Insert an element in a tree / create a tree

* Search: Search for an item in a tree

* Pre-order Traversal: Trasverses a tree of a maera pre-oder.
In this transverse method, the root node is first visited, then the left sub-tree and finally the right sub-tree.
```
Until all nodes are traversed −
Step 1 − Visit root node.
Step 2 − Recursively traverse left subtree.
Step 3 − Recursively traverse right subtree.
```

* In-order Traversal: It crosses a tree in an orderly manner.
In this transversal meotod, first the left subtree is visited, then the root and then the right subtree. We must always remember that each node can represent a subtree itself.
If a binary tree is traversed in order, the output will produce sorted key values ​​in ascending order
```
Until all nodes are traversed −
Step 1 − Recursively traverse left subtree.
Step 2 − Visit root node.
Step 3 − Recursively traverse right subtree.
```
* Post-order Traveral: It crosses a tree later.
In this method, the root node is visited last, hence the name. First we cross the left subtree, then the right subtree and finally the root node.
```
Until all nodes are traversed −
Step 1 − Recursively traverse left subtree.
Step 2 − Recursively traverse right subtree.
Step 3 − Visit root node.
```

By:
[Lina Maria Montano](https://github.com/calypsobronte/)
[Andres Felipe Garcia Rendon](https://github.com/andres0191/)