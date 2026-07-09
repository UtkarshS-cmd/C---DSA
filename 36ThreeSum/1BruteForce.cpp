// 3Sum
// Approach: Use sorting and the two-pointer pattern.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumBrute(vector<int> nums) { vector<vector<int>> ans; for (int i = 0; i < (int)nums.size(); ++i) for (int j = i + 1; j < (int)nums.size(); ++j) for (int k = j + 1; k < (int)nums.size(); ++k) if (nums[i] + nums[j] + nums[k] == 0) ans.push_back({nums[i], nums[j], nums[k]}); return ans; }

int main() { vector<int> nums = {-1, 0, 1, 2, -1, -4}; auto ans = threeSumBrute(nums); for (auto &v : ans) { for (int x : v) cout << x << ' '; cout << "\n"; } return 0; }

