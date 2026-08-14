// Search in a 2D Matrix
// Approach: Use a single-pointer traversal for sorted matrix search.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool searchMatrixMoreOptimized(const vector<vector<int>>& mat, int target) { int r = 0, c = (int)mat[0].size() - 1; while (r < (int)mat.size() && c >= 0) { if (mat[r][c] == target) return true; if (mat[r][c] < target) ++r; else --c; } return false; }

int main() { vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}; cout << boolalpha << searchMatrixMoreOptimized(mat, 13) << "\n"; return 0; }

