What is a binary tree
A binary tree is a data structure. This data strcuture have the form of a tree, with each node containing datas and they can have 2 children at most.

What is the difference between a binary tree and a Binary Search Tree
The data inside of a binary tree will be displayed like the user want, it can be desorganized. Meanwhile, in a binary search tree, the datas have to be organized. The left child will be less value than his root while the right child will have more value than the root. It can be easy to find data like this.

What is the possible gain in terms of time complexity compared to linked lists
The way we go throught the elements in a linked list are with O(n), it means that we go throught all the list to get to the element we want. Meanwhile, in a binary tree, we use the O(log n) way, wich 	divide the bineary tree, until the respond is find.

What are the depth, the height, the size of a binary tree
The size of a binary tree is how many node we have. The depth represent how many level of children there are. The height represent the longest path to the root until the last node, it will always be equal to the depth.

What are the different traversal methods to go through a binary tree
In-order(left -> root -> right), pre-order(root -> left -> right) and Post-order(left -> right -> root)

What is a complete, a full, a perfect, a balanced binary tree
- In a complete binary tree, all the leaf must be at the same depth. The nodes can have 0, 1 or 2 children.
- In a full binary tree, all the nodes must have 0 or 2 children. If there is a node with 1 child, so it will not be a full binary tree
- In a perfect binary tree, all the leaf must be at the same level and all the nodes must have 2 children, excpet the leaf nodes.
- In a balanced binary tree, all node must be filled for the better experience. All the children must have 2 children but the leafs don't have to be at the same depth.


Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the standard library
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called binary_trees.h
Don’t forget to push your header file
All your header files should be include guarded
