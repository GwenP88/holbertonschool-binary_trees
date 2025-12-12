![Binary Trees Banner](./assets/binary_tree.png)

# Binary Trees — Holberton School  
### Project README (Pair Programming)

## Authors

This project was developed collaboratively using pair programming.

- **GwenP88**  
  GitHub: https://github.com/GwenP88

- **Ali731-Amb**  
  GitHub: https://github.com/Ali731-Amb


## Introduction  
This repository contains our implementation of fundamental binary tree operations as part of the Holberton School Low-Level Programming curriculum. The work was completed **in a pair-programming setup**, following Holberton collaboration standards:  
- **Task distribution:** one teammate handled **odd-numbered tasks**, the other handled **even-numbered tasks**.  
- **Process:** continuous communication, synchronous code reviews, shared debugging sessions, validation of each function before moving forward, and strict enforcement of coding style.  
- This project also served as practical training in team workflow, repository hygiene, and modular low-level design.

---

## Pair Programming Workflow

This project was completed in a 2-student group using the following collaboration model:

- Alternating task assignment (even vs odd tasks) while ensuring **joint architectural decisions**.  
- Permanent communication on:
  - Code logic  
  - Big O complexity reasoning  
  - Edge cases and input validation  
  - Git commits, branches, and merges  
- Live review of each function before pushing.  
- Pair debugging sessions for segmentation faults, pointer issues, and list manipulation errors.  
- Both students fully understand **all** parts of the code, regardless of who typed them.

This mirrors real-world collaborative development: shared responsibility, consistent style, and synchronized progress.

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
- Compilation (Holberton standard): `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Files must end with a newline  
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
**Objective:** allocate and initialize a new binary tree node.  
**Return:** new node or `NULL`.

## 1. Insert left  
Insert node as left child.  
**Objective:** insert a node on the left and reattach the previous left child under it if needed.  
**Return:** new node or `NULL`.

## 2. Insert right  
Insert node as right child.  
**Objective:** insert a node on the right and reattach the previous right child under it if needed.  
**Return:** new node or `NULL`.

## 3. Delete tree  
Free the entire tree in post-order.  
**Objective:** release all allocated nodes without memory leaks.  
**Behavior:** do nothing if tree is `NULL`.

## 4. Is leaf  
Check if a node has no children.  
**Objective:** identify terminal nodes in the tree.  
**Return:** `1` if leaf, else `0`.

## 5. Is root  
Check if node has no parent.  
**Objective:** detect whether a node is the root of the tree.  
**Return:** `1` if root, else `0`.

## 6. Pre-order traversal  
Visit nodes in **root → left → right**.  
**Objective:** traverse the tree in pre-order and call a callback on each node value.  

## 7. In-order traversal  
Visit nodes in **left → root → right**.  
**Objective:** traverse the tree in in-order and call a callback on each node value.  

## 8. Post-order traversal  
Visit nodes in **left → right → root**.  
**Objective:** traverse the tree in post-order and call a callback on each node value.  

## 9. Height  
Compute the height of the tree.  
**Objective:** determine the longest path from root to a leaf (in edges).  
**Return:** `0` for `NULL` tree.

## 10. Depth  
Measure depth from a node to the root.  
**Objective:** count how far a node is from the root (in edges).  
**Return:** `0` for `NULL`.

## 11. Size  
Count all nodes in the tree.  
**Objective:** compute the total number of nodes in the structure.  
**Return:** size or `0` for `NULL`.

## 12. Leaves  
Count all leaf nodes.  
**Objective:** compute how many terminal nodes the tree has.  
**Return:** number of leaves.

## 13. Nodes  
Count nodes with at least one child.  
**Objective:** compute the number of internal (non-leaf) nodes.  
**Return:** count.

## 14. Balance factor  
Compute balance: **height(left) − height(right)**.  
**Objective:** evaluate how balanced a binary tree is at the root.  
**Return:** `0` if tree is `NULL`.

## 15. Is full  
Check if every node has **0 or 2 children**.  
**Objective:** verify that the tree respects the “full binary tree” property.  
**Return:** `1` if full, else `0`.

## 16. Is perfect  
Check if tree is full **and** all leaves are at the same level.  
**Objective:** verify that the tree is both full and perfectly balanced in depth.  
**Return:** `1` if perfect.

## 17. Sibling  
Return a node’s sibling.  
**Objective:** retrieve the other child of the same parent.  
**Return:** sibling or `NULL`.

## 18. Uncle  
Return a node’s uncle (parent’s sibling).  
**Objective:** navigate up to the grandparent and return the parent’s sibling if it exists.  
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

