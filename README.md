![Binary Trees Banner](./assets/binary_tree.png)

# Binary Trees — Holberton School  
### Project README (Pair Programming)

## Introduction  
This repository contains our implementation of fundamental binary tree operations as part of the Holberton School Low-Level Programming curriculum. The work was completed **in a pair-programming setup**, following Holberton collaboration standards:  
- **Task distribution:** one teammate handled **odd-numbered tasks**, the other handled **even-numbered tasks**.  
- **Process:** continuous communication, synchronous code reviews, shared debugging sessions, validation of each function before moving forward, and strict enforcement of coding style.  
- This project also served as practical training in team workflow, repository hygiene, and modular low-level design.

---

## Learning Objectives  
At the end of this project, we were able to explain:  
- What a **binary tree** is  
- The difference between a **Binary Tree** and a **Binary Search Tree (BST)**  
- Potential **time complexity gains** over linked lists  
- Definitions of **depth**, **height**, **size** of a tree  
- The different traversal strategies: **pre-order**, **in-order**, **post-order**  
- What defines a **complete**, **full**, **perfect**, and **balanced** binary tree  

---

## Requirements  
- Editors allowed: `vi`, `vim`, `emacs`  
- Compilation (Holberton standard): gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- - Files must end with a newline  
- **Betty style** required (checked with `betty-style.pl` and `betty-doc.pl`)  
- No global variables  
- Maximum **5 functions per file**  
- Standard library allowed  
- Only prototypes in `binary_trees.h`  
- Header files must be protected with include guards  
- One unique repository per group  

---

## Data Structures  
```c
typedef struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
} binary_tree_t;

typedef binary_tree_t bst_t;
typedef binary_tree_t avl_t;
typedef binary_tree_t heap_t;

```
# Mandatory Tasks (0–18)

## 0. New node  
Create a standalone node with given parent.  
**Objective:** memory allocation + initialization.  
**Return:** new node or `NULL`.

## 1. Insert left  
Insert node as left child.  
**Objective:** replace existing left child if needed.  
**Return:** new node or `NULL`.

## 2. Insert right  
Insert node as right child.  
**Objective:** replace existing right child if needed.  
**Return:** new node or `NULL`.

## 3. Delete tree  
Free the entire tree in post-order.  
**Objective:** avoid memory leaks.  
**Behavior:** do nothing if tree is `NULL`.

## 4. Is leaf  
Check if a node has no children.  
**Return:** `1` if leaf, else `0`.

## 5. Is root  
Check if node has no parent.  
**Return:** `1` if root, else `0`.

## 6. Pre-order traversal  
Visit nodes in **root → left → right**.  
**Objective:** apply a callback function to each value.

## 7. In-order traversal  
Visit nodes in **left → root → right**.  
**Objective:** callback on each visited node.

## 8. Post-order traversal  
Visit nodes in **left → right → root**.  
**Objective:** callback on each node.

## 9. Height  
Compute the height of the tree.  
**Return:** `0` for `NULL` tree.

## 10. Depth  
Measure depth from a node to the root.  
**Return:** `0` for `NULL`.

## 11. Size  
Count all nodes in the tree.  
**Return:** size or `0` for `NULL`.

## 12. Leaves  
Count all leaf nodes.  
**Objective:** ignore `NULL`.  
**Return:** number of leaves.

## 13. Nodes  
Count nodes with at least one child.  
**Objective:** internal nodes only.  
**Return:** count.

## 14. Balance factor  
Compute balance: **height(left) − height(right)**.  
**Return:** `0` if tree is `NULL`.

## 15. Is full  
Check if every node has **0 or 2 children**.  
**Return:** `1` if full, else `0`.

## 16. Is perfect  
Check if tree is full **and** all leaves are at the same level.  
**Return:** `1` if perfect.

## 17. Sibling  
Return a node’s sibling.  
**Objective:** check parent and opposite child.  
**Return:** sibling or `NULL`.

## 18. Uncle  
Return a node’s uncle (parent’s sibling).  
**Return:** uncle or `NULL`.

---

# Future Work  
The project includes **25 additional advanced tasks** involving:  
- BST operations  
- AVL rotations and balancing  
- Heap insertion/extraction  
- Level-order traversal  
- Tree properties and conversions  

These will be attempted progressively to deepen understanding and strengthen algorithmic skills.

---

# Conclusion  
This binary tree project consolidated our understanding of essential data structures while enforcing strict low-level programming discipline. Completing it as a **pair programming project** strengthened our ability to collaborate efficiently, divide work logically, maintain consistent code quality, and solve problems as a team — skills aligned with real-world engineering workflows.

