// 4Sum
// Approach: Extend the two-pointer pattern from 3Sum.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumOptimized(vector<int> nums, int target) { sort(nums.begin(), nums.end()); vector<vector<int>> ans; for (int i = 0; i < (int)nums.size(); ++i) for (int j = i + 1; j < (int)nums.size(); ++j) { int l = j + 1, r = (int)nums.size() - 1; while (l < r) { long long sum = 1LL * nums[i] + nums[j] + nums[l] + nums[r]; if (sum == target) { ans.push_back({nums[i], nums[j], nums[l], nums[r]}); ++l; --r; } else if (sum < target) ++l; else --r; } } return ans; }

int main() { vector<int> nums = {2, 2, 2, 2, 2}; auto ans = fourSumOptimized(nums, 8); for (auto &v : ans) { for (int x : v) cout << x << ' '; cout << "\n"; } return 0; }

