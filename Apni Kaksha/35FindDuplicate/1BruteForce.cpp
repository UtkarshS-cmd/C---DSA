// Find Duplicate
// Approach: Use Floyd?s cycle detection for constant extra space.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int findDuplicateBrute(const vector<int>& nums) { for (int i = 0; i < (int)nums.size(); ++i) for (int j = i + 1; j < (int)nums.size(); ++j) if (nums[i] == nums[j]) return nums[i]; return -1; }

int main() { vector<int> nums = {1, 3, 4, 2, 2}; cout << findDuplicateBrute(nums) << "\n"; return 0; }

