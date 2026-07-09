// Two Sum
// Approach: Use a hash map to solve in linear time.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumOptimized(const vector<int>& nums, int target) { unordered_map<int, int> mp; for (int i = 0; i < (int)nums.size(); ++i) { int need = target - nums[i]; if (mp.count(need)) return {mp[need], i}; mp[nums[i]] = i; } return {}; }

int main() { vector<int> nums = {2, 7, 11, 15}; auto ans = twoSumOptimized(nums, 9); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

