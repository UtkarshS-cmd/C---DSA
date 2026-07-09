// 2D Vector Practice
// Approach: Practice common matrix operations.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { vector<vector<int>> mat = {{1,2,3},{4,5,6}}; int sum = 0; for (auto &row : mat) for (int x : row) sum += x; cout << sum << "\n"; return 0; }

