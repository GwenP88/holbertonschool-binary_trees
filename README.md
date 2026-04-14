# binary_trees

> Trees grow upward from a single root — and so does understanding, one node at a time.

---

## 📝 Description

This project is part of the low-level programming curriculum at Holberton School and was completed as a **pair programming project**. It focuses on binary trees: one of the most fundamental and versatile data structures in computer science. Starting from node creation and basic operations, we build a complete binary tree library covering traversal strategies, structural properties, and complex classification checks. The tasks cover simple binary trees only (Tasks 0–18), as they do not follow BST ordering rules — a deliberate choice that keeps the focus on tree mechanics rather than value constraints. The project also includes 25 additional advanced tasks covering BST, AVL trees, heaps, and level-order traversal, to be tackled progressively.

---

## 🤝 Pair Programming — How We Worked Together

This project was completed in collaboration with **Alison Amblard** ([@Ali731-Amb](https://github.com/Ali731-Amb)).

We divided the workload as follows:
- **Gwenaelle** handled the **even-numbered tasks** (0, 2, 4, 6, 8, 10, 12, 14, 16, 18)
- **Alison** handled the **odd-numbered tasks** (1, 3, 5, 7, 9, 11, 13, 15, 17)

Beyond the task split, we worked in continuous communication throughout the project: we held synchronous code review sessions after each function, shared debugging efforts when edge cases appeared, validated each implementation together before moving forward, and enforced Betty style across the entire codebase. The pair programming format proved invaluable for catching subtle pointer errors and discussing algorithmic trade-offs — two pairs of eyes on a binary tree are much better than one.

---

## 🎯 Learning Objectives

At the end of this project, we are able to explain what a binary tree is and what distinguishes it from a Binary Search Tree. We understand the potential time complexity gains that trees offer over linked lists, particularly for search and insertion operations. We can define and compute the depth, height, and size of a binary tree, and we know how to traverse one using pre-order, in-order, and post-order strategies. We are also able to identify and verify whether a tree is complete, full, perfect, or balanced.

---

## 🛠️ Technologies Used

All programs in this project are written in **C** and compiled on **Ubuntu 20.04 LTS** using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`. Code style is enforced by the **Betty linter** (`betty-style.pl` and `betty-doc.pl`). The full C standard library is allowed. All function prototypes are declared in the header file `binary_trees.h`, which uses include guards. A `binary_tree_print` function is provided for visualization purposes only and is not pushed to the repository.

The data structures used are:

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef binary_tree_t bst_t;   /* Binary Search Tree */
typedef binary_tree_t avl_t;   /* AVL Tree */
typedef binary_tree_t heap_t;  /* Max Binary Heap */
```

---

## ⚙️ Requirements

- **OS:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must end with a **new line**
- No errors and no warnings during compilation
- Global variables are **not allowed**
- No more than **5 functions per file**
- The **full C standard library is allowed**
- All function prototypes must be declared in `binary_trees.h`
- All header files must be **include guarded**
- Do not push `main.c` test files
- Do not push `binary_tree_print.c` — it is for local testing only
- Code must follow the **Betty style**
- **One repository per pair** — cloning or forking after the second deadline risks a score of 0%

---

## 🚀 Installation

```bash
git clone https://github.com/GwenP88/holbertonschool-binary_trees.git
cd holbertonschool-binary_trees
```

---

## ▶️ Usage / Execution

Compile any task file with its test main and the print utility:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```

For tasks that depend on multiple source files:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 14-main.c 14-binary_tree_balance.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance
./14-balance
```

Use Valgrind to verify that no memory is leaked:

```bash
valgrind ./3-del
```

---

## 📊 Project Progress

<p align="center">
<img src="assets/progress_barre_100.gif" alt="Mandatory tasks progress" width="80%">
</p>

<p align="center">
<sub>Mandatory tasks completion: 100%</sub>
</p>

---

## ✨ Features

### Task 0 - New node

- Mandatory — handled by **Gwenaelle**
- Write a function that creates a binary tree node with a given parent and value; the new node has no children
- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` — standard library allowed
- Returns a pointer to the newly created node, or `NULL` on failure

**Files:** `0-binary_tree_node.c`

---

### Task 1 - Insert left

- Mandatory — handled by **Alison**
- Write a function that inserts a node as the left child of another node; if the parent already has a left child, it becomes the left child of the new node
- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` — standard library allowed
- Returns a pointer to the new node, or `NULL` on failure or if `parent` is `NULL`

**Files:** `1-binary_tree_insert_left.c`

---

### Task 2 - Insert right

- Mandatory — handled by **Gwenaelle**
- Write a function that inserts a node as the right child of another node; if the parent already has a right child, it becomes the right child of the new node
- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` — standard library allowed
- Returns a pointer to the new node, or `NULL` on failure or if `parent` is `NULL`

**Files:** `2-binary_tree_insert_right.c`

---

### Task 3 - Delete

- Mandatory — handled by **Alison**
- Write a function that deletes an entire binary tree using post-order traversal; does nothing if `tree` is `NULL`
- Prototype: `void binary_tree_delete(binary_tree_t *tree);` — standard library allowed
- Frees all nodes recursively; Valgrind confirms zero leaks after execution

**Files:** `3-binary_tree_delete.c`

---

### Task 4 - Is leaf

- Mandatory — handled by **Gwenaelle**
- Write a function that checks if a node is a leaf (has no children); returns `0` if `node` is `NULL`
- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);` — standard library allowed
- Returns `1` if the node has no left or right child, otherwise `0`

**Files:** `4-binary_tree_is_leaf.c`

---

### Task 5 - Is root

- Mandatory — handled by **Alison**
- Write a function that checks if a node is a root (has no parent); returns `0` if `node` is `NULL`
- Prototype: `int binary_tree_is_root(const binary_tree_t *node);` — standard library allowed
- Returns `1` if the node's `parent` pointer is `NULL`, otherwise `0`

**Files:** `5-binary_tree_is_root.c`

---

### Task 6 - Pre-order traversal

- Mandatory — handled by **Gwenaelle**
- Write a function that traverses a binary tree in pre-order (root → left → right) and calls a function on each node's value; does nothing if `tree` or `func` is `NULL`
- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` — standard library allowed
- Visits and processes every node in pre-order sequence

**Files:** `6-binary_tree_preorder.c`

---

### Task 7 - In-order traversal

- Mandatory — handled by **Alison**
- Write a function that traverses a binary tree in in-order (left → root → right) and calls a function on each node's value; does nothing if `tree` or `func` is `NULL`
- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` — standard library allowed
- Visits and processes every node in in-order sequence; on a BST this produces sorted output

**Files:** `7-binary_tree_inorder.c`

---

### Task 8 - Post-order traversal

- Mandatory — handled by **Gwenaelle**
- Write a function that traverses a binary tree in post-order (left → right → root) and calls a function on each node's value; does nothing if `tree` or `func` is `NULL`
- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` — standard library allowed
- Visits and processes every node in post-order sequence; useful for deletion

**Files:** `8-binary_tree_postorder.c`

---

### Task 9 - Height

- Mandatory — handled by **Alison**
- Write a function that measures the height of a binary tree (longest path from root to a leaf in edges); returns `0` if `tree` is `NULL`
- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);` — standard library allowed
- Returns the maximum depth of any leaf in the tree

**Files:** `9-binary_tree_height.c`

---

### Task 10 - Depth

- Mandatory — handled by **Gwenaelle**
- Write a function that measures the depth of a node (distance from the node to the root in edges); returns `0` if `tree` is `NULL`
- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);` — standard library allowed
- Returns the number of edges from the node up to the root

**Files:** `10-binary_tree_depth.c`

---

### Task 11 - Size

- Mandatory — handled by **Alison**
- Write a function that counts the total number of nodes in a binary tree; returns `0` if `tree` is `NULL`
- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);` — standard library allowed
- Returns the total node count by recursively summing both subtrees

**Files:** `11-binary_tree_size.c`

---

### Task 12 - Leaves

- Mandatory — handled by **Gwenaelle**
- Write a function that counts the number of leaf nodes (nodes with no children) in a binary tree; returns `0` if `tree` is `NULL`; a `NULL` pointer is not a leaf
- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);` — standard library allowed
- Returns the count of terminal nodes in the tree

**Files:** `12-binary_tree_leaves.c`

---

### Task 13 - Nodes

- Mandatory — handled by **Alison**
- Write a function that counts the number of internal nodes (nodes with at least one child) in a binary tree; returns `0` if `tree` is `NULL`; a `NULL` pointer is not a node
- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);` — standard library allowed
- Returns the count of non-leaf nodes in the tree

**Files:** `13-binary_tree_nodes.c`

---

### Task 14 - Balance factor

- Mandatory — handled by **Gwenaelle**
- Write a function that measures the balance factor of a binary tree: `height(left) − height(right)`; returns `0` if `tree` is `NULL`
- Prototype: `int binary_tree_balance(const binary_tree_t *tree);` — standard library allowed
- Returns a positive value if left-heavy, negative if right-heavy, `0` if balanced

**Files:** `14-binary_tree_balance.c`

---

### Task 15 - Is full

- Mandatory — handled by **Alison**
- Write a function that checks if a binary tree is full (every node has either 0 or 2 children); returns `0` if `tree` is `NULL`
- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);` — standard library allowed
- Returns `1` if every node in the tree has exactly 0 or 2 children, otherwise `0`

**Files:** `15-binary_tree_is_full.c`

---

### Task 16 - Is perfect

- Mandatory — handled by **Gwenaelle**
- Write a function that checks if a binary tree is perfect (full and all leaves at the same level); returns `0` if `tree` is `NULL`
- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);` — standard library allowed
- Returns `1` only if the tree is both full and has uniform leaf depth

**Files:** `16-binary_tree_is_perfect.c`

---

### Task 17 - Sibling

- Mandatory — handled by **Alison**
- Write a function that returns the sibling of a node (the other child of its parent); returns `NULL` if `node` or its parent is `NULL`, or if the node has no sibling
- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);` — standard library allowed
- Returns a pointer to the sibling node, or `NULL`

**Files:** `17-binary_tree_sibling.c`

---

### Task 18 - Uncle

- Mandatory — handled by **Gwenaelle**
- Write a function that returns the uncle of a node (the sibling of the node's parent); returns `NULL` if `node` is `NULL` or has no uncle
- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);` — standard library allowed
- Navigates to the grandparent and returns the parent's sibling, or `NULL` if none exists

**Files:** `18-binary_tree_uncle.c`

---

## 🔮 What's Next

We plan to come back to this project and tackle the **25 remaining advanced tasks** that were not completed during the initial project window. Stopping at the mandatory tasks felt like finishing a book at chapter 18 — technically acceptable, but not really satisfying.

These advanced tasks cover topics that go well beyond the basics:

- **BST** operations (insertion, search, removal)
- **AVL tree** rotations and self-balancing
- **Max Binary Heap** insertion and extraction
- **Level-order traversal** (breadth-first)
- Tree conversion and advanced structural verification

We intend to revisit this project as a training exercise — to consolidate what we have learned, push further into tree theory, and practice the kind of algorithmic thinking that shows up in technical interviews and real engineering work. Because stopping halfway is not really our style.

---

## 🤝 Contributions & Acknowledgements

A big thank you to Holberton School for a project that makes you think recursively — literally. Working through binary trees as a pair was one of the most rewarding experiences of the curriculum: harder problems become more tractable when you can talk through them out loud with a teammate. Thanks to **Alison** for the collaboration, the late-night debugging sessions, and the consistent Betty-compliant code. And thanks to the tree itself — a structure that is somehow both simple and endlessly deep.

---

## 👤 Authors

**Gwenaelle PICHOT**
- Student at Holberton School
- Track: `holbertonschool-binary_trees`
- Project: `binary_trees`
- GitHub: [@GwenP88](https://github.com/GwenP88)

**Alison Amblard**
- Student at Holberton School
- Track: `holbertonschool-binary_trees`
- Project: `binary_trees`
- GitHub: [@Ali731-Amb](https://github.com/Ali731-Amb)