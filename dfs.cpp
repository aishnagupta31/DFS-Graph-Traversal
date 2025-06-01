#include <bits/stdc++.h>
using namespace std;

void DFS(int s, vector<vector<int>>& adj, vector<int>& visited) {
    cout << s<<" ";
    visited[s] = 1;
    
    for (auto it : adj[s]) {
        if (visited[it] == 0) {
            DFS(it, adj, visited);
        }
    }
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;
    
    vector<vector<int>> adj(vertices + 1);  // Adjacency list
    
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // Undirected graph
    }
    vector<int> visited(vertices + 1, 0);
    int s;
    cin >> s;  // Starting node for DFS

    DFS(s, adj, visited);  // Perform DFS
    cout<<endl;
    
    // Printing the adjacency list of the graph
    for (int i = 1; i <= vertices; i++) {
        cout << i << ": ";
        for (auto it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
    
    return 0;
}
