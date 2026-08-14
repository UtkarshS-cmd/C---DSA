// 4Sum
// Approach: Extend the two-pointer pattern from 3Sum.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumMoreOptimized(vector<int> nums, int target) { sort(nums.begin(), nums.end()); vector<vector<int>> ans; for (int i = 0; i < (int)nums.size(); ++i) { if (i > 0 && nums[i] == nums[i - 1]) continue; for (int j = i + 1; j < (int)nums.size(); ++j) { if (j > i + 1 && nums[j] == nums[j - 1]) continue; int l = j + 1, r = (int)nums.size() - 1; while (l < r) { long long sum = 1LL * nums[i] + nums[j] + nums[l] + nums[r]; if (sum == target) { ans.push_back({nums[i], nums[j], nums[l], nums[r]}); ++l; --r; while (l < r && nums[l] == nums[l - 1]) ++l; while (l < r && nums[r] == nums[r + 1]) --r; } else if (sum < target) ++l; else --r; } } } return ans; }

int main() { vector<int> nums = {2, 2, 2, 2, 2}; auto ans = fourSumMoreOptimized(nums, 8); for (auto &v : ans) { for (int x : v) cout << x << ' '; cout << "\n"; } return 0; }

