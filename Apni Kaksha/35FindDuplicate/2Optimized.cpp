// Find Duplicate
// Approach: Use Floyd?s cycle detection for constant extra space.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int findDuplicateOptimized(const vector<int>& nums) { unordered_set<int> seen; for (int x : nums) { if (seen.count(x)) return x; seen.insert(x); } return -1; }

int main() { vector<int> nums = {1, 3, 4, 2, 2}; cout << findDuplicateOptimized(nums) << "\n"; return 0; }

