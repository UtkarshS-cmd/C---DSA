// Spiral Matrix
// Approach: Traverse the matrix in layers.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrderOptimized(const vector<vector<int>>& mat) { vector<int> ans; int top = 0, bottom = (int)mat.size() - 1, left = 0, right = (int)mat[0].size() - 1; while (top <= bottom && left <= right) { for (int col = left; col <= right; ++col) ans.push_back(mat[top][col]); ++top; for (int row = top; row <= bottom; ++row) ans.push_back(mat[row][right]); --right; if (top <= bottom) for (int col = right; col >= left; --col) ans.push_back(mat[bottom][col]); --bottom; if (left <= right) for (int row = bottom; row >= top; --row) ans.push_back(mat[row][left]); ++left; } return ans; }

int main() { vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}}; auto ans = spiralOrderOptimized(mat); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

