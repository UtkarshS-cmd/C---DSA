// Search in a 2D Matrix
// Approach: Use a single-pointer traversal for sorted matrix search.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool searchMatrixBrute(const vector<vector<int>>& mat, int target) { for (auto &row : mat) for (int x : row) if (x == target) return true; return false; }

int main() { vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}; cout << boolalpha << searchMatrixBrute(mat, 13) << "\n"; return 0; }

