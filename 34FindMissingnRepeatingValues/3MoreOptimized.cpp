// Find Missing and Repeating Values
// Approach: Use frequency arrays or in-place placement.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

pair<int,int> findMissingRepeatingMoreOptimized(vector<int> nums) { for (int i = 0; i < (int)nums.size(); ++i) { while (nums[i] != i + 1 && nums[i] != -1) { int idx = nums[i] - 1; if (nums[idx] == nums[i]) break; swap(nums[idx], nums[i]); } } int missing = -1, repeating = -1; for (int i = 0; i < (int)nums.size(); ++i) { if (nums[i] != i + 1) { if (missing == -1) missing = i + 1; else repeating = nums[i]; } } return {missing, repeating}; }

int main() { vector<int> nums = {1, 2, 2, 4}; auto ans = findMissingRepeatingMoreOptimized(nums); cout << ans.first << ' ' << ans.second << "\n"; return 0; }

