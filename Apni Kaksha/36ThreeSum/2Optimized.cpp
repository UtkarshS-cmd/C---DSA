// 3Sum
// Approach: Use sorting and the two-pointer pattern.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumOptimized(vector<int> nums) { sort(nums.begin(), nums.end()); vector<vector<int>> ans; for (int i = 0; i < (int)nums.size(); ++i) { int l = i + 1, r = (int)nums.size() - 1; while (l < r) { int sum = nums[i] + nums[l] + nums[r]; if (sum == 0) { ans.push_back({nums[i], nums[l], nums[r]}); ++l; --r; } else if (sum < 0) ++l; else --r; } } return ans; }

int main() { vector<int> nums = {-1, 0, 1, 2, -1, -4}; auto ans = threeSumOptimized(nums); for (auto &v : ans) { for (int x : v) cout << x << ' '; cout << "\n"; } return 0; }

