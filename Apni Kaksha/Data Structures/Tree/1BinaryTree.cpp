// Binary Tree
// Approach: Build a simple binary tree and traverse it.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} };

void preorder(TreeNode* root) { if (!root) return; cout << root->val << ' '; preorder(root->left); preorder(root->right); }

int main() { TreeNode* root = new TreeNode(1); root->left = new TreeNode(2); root->right = new TreeNode(3); preorder(root); cout << "\n"; return 0; }

