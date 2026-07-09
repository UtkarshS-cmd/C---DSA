// Spiral Matrix
// Approach: Traverse the matrix in layers.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrderMoreOptimized(const vector<vector<int>>& mat) { vector<int> ans; int top = 0, bottom = (int)mat.size() - 1, left = 0, right = (int)mat[0].size() - 1; while (top <= bottom && left <= right) { for (int c = left; c <= right; ++c) ans.push_back(mat[top][c]); ++top; for (int r = top; r <= bottom; ++r) ans.push_back(mat[r][right]); --right; if (top <= bottom) for (int c = right; c >= left; --c) ans.push_back(mat[bottom][c]); --bottom; if (left <= right) for (int r = bottom; r >= top; --r) ans.push_back(mat[r][left]); ++left; } return ans; }

int main() { vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}}; auto ans = spiralOrderMoreOptimized(mat); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

