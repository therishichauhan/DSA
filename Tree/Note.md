# Tree

It is a collection of nodes that are connected by edges and has a hierarchical relationship between the nodes. 

``Basic Terminologies In Tree Data Structure:``

- Root Node: The topmost node of a tree or the node which does not have any parent node is called the root node

- Parent Node: The node which is a predecessor of a node is called the parent node of that node

- Child Node: The node which is the immediate successor of a node is called the child node of that node

- Leaf Node or External Node: The nodes which do not have any child nodes are called leaf nodes

- Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.

- Internal node: A node with at least one child is called Internal Node.

- Descendant: Any successor node on the path from the leaf node to that node

- Sibling: Children of the same parent node are called siblings.

- Ancestor of a Node: Any predecessor nodes on the path of the root to that node are called Ancestors of that node

- Subtree: Any node of the tree along with its descendant.


## Binary tree

 In a binary tree, each node can have a maximum of two children linked to it.

**Properties of a Binary Tree:**

- The maximum number of nodes at level 'l' of a binary tree is (2l - 1). Level of root is 1. This can be proved by induction. For root, l = 1, number of nodes = 21-1 = 1 Assume that the maximum number of nodes on level l is 2l-1. Since in Binary tree every node has at most 2 children, next level would have twice nodes, i.e. 2 * 2l-1.

- Maximum number of nodes in a binary tree of height 'h' is (2h – 1). Here height of a tree is the maximum number of nodes on the root to leaf path. The height of a tree with a single node is considered as 1. This result can be derived from point 2 above. A tree has maximum nodes if all levels have maximum nodes. So maximum number of nodes in a binary tree of height h is 1 + 2 + 4 + .. + 2h-1. This is a simple geometric series with h terms and sum of this series is 2h – 1. In some books, the height of the root is considered as 0. In that convention, the above formula becomes 2h+1 – 1.

- In a Binary Tree with N nodes, the minimum possible height or the minimum number of levels is Log2(N+1). This can be directly derived from point 2 above. If we consider the convention where the height of a leaf node is considered 0, then above formula for minimum possible height becomes Log2(N+1) – 1.

- A Binary Tree with L leaves has at least (Log2L + 1) levels. A Binary tree has maximum number of leaves (and minimum number of levels) when all levels are fully filled. Let all leaves be at level l, then below is true for number of leaves L.

   L   <=  2l-1  [From Point 1]
   l =  Log2L + 1 
   where l is the minimum number of levels. 

In a Binary tree in which every node has 0 or 2 children, the number of leaf nodes is always one more than the nodes with two children.

```
   L = T + 1
Where L = Number of leaf nodes
   T = Number of internal nodes with two children

```



  A **full binary tree** is a binary tree with either zero or two child nodes for each node. 

  - A full binary tree, on the other hand, does not have any nodes that have only one child node.

  A **height balanced binary tree** is a binary tree in which the height of the left subtree and right subtree of any node does not differ by more than 1 and both the left and right subtree are also height balanced.

**Complete Binary Tree**: A Binary Tree is a complete Binary Tree if all levels are completely filled except possibly the last level and the last level has all keys as left as possible

**Perfect Binary Tree**: A Binary tree is a Perfect Binary Tree when all internal nodes have two children and all the leave nodes are at the same level. 

- A Perfect Binary Tree of height h (where height is the number of nodes on the path from the root to leaf) has 2^h – 1 node.

  #### Basic Operation Of Tree Data Structure

  **create**
```

```







 - 



