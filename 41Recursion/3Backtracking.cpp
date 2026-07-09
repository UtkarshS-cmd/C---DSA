// Recursion Basics
// Approach: Explore factorial, Fibonacci, and backtracking.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void backtrack(int n, int row, vector<string>& board) { if (row == n) { for (auto &s : board) cout << s << "\n"; cout << "---\n"; return; } for (int col = 0; col < n; ++col) { board[row][col] = 'Q'; backtrack(n, row + 1, board); board[row][col] = '.'; } }

int main() { int n = 1; vector<string> board(n, string(n, '.')); backtrack(n, 0, board); return 0; }

