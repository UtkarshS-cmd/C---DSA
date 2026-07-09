// Graph Using Adjacency List
// Approach: Represent a graph with vectors.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { int n = 3; vector<vector<int>> graph(n); graph[0].push_back(1); graph[1].push_back(2); for (int i = 0; i < n; ++i) { cout << i << ": "; for (int x : graph[i]) cout << x << ' '; cout << "\n"; } return 0; }

