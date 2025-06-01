# Depth First Search (DFS) Traversal in C++

This C++ program demonstrates **Depth First Search (DFS)** on an undirected graph using an adjacency list representation.

## 🧠 Key Concepts

- Uses DFS (recursive) to traverse the graph.
- Accepts user input for number of vertices, edges, and starting node.
- Maintains a visited array to avoid revisiting nodes.
- Prints both the DFS traversal order and the adjacency list of the graph.

## 📌 Input Format

vertices edges
u1 v1
u2 v2
...
start_node


### Example Input:
5 4
1 2
1 3
3 4
4 5
1

### Example Output:
1 2 3 4 5
1: 2 3
2: 1
3: 1 4
4: 3 5
5: 4


## 🛠️ How to Run

1. Save the code in a file (e.g., `dfs.cpp`)
2. Compile using: `g++ dfs.cpp -o dfs`
3. Run: `./dfs`



