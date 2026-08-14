// 4Sum
// Approach: Extend the two-pointer pattern from 3Sum.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumBrute(vector<int> nums, int target) { vector<vector<int>> ans; for (int i = 0; i < (int)nums.size(); ++i) for (int j = i + 1; j < (int)nums.size(); ++j) for (int k = j + 1; k < (int)nums.size(); ++k) for (int l = k + 1; l < (int)nums.size(); ++l) if (nums[i] + nums[j] + nums[k] + nums[l] == target) ans.push_back({nums[i], nums[j], nums[k], nums[l]}); return ans; }

int main() { vector<int> nums = {2, 2, 2, 2, 2}; auto ans = fourSumBrute(nums, 8); for (auto &v : ans) { for (int x : v) cout << x << ' '; cout << "\n"; } return 0; }

