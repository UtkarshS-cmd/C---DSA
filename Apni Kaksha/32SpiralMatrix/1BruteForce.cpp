// Spiral Matrix
// Approach: Traverse the matrix in layers.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrderBrute(const vector<vector<int>>& mat) { vector<int> ans; for (int i = 0; i < (int)mat.size(); ++i) for (int j = 0; j < (int)mat[i].size(); ++j) ans.push_back(mat[i][j]); return ans; }

int main() { vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}}; auto ans = spiralOrderBrute(mat); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

