// LeetCode 1 - Two Sum
// Approach: Classic hash-map solution.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) { unordered_map<int, int> mp; for (int i = 0; i < (int)nums.size(); ++i) { if (mp.count(target - nums[i])) return {mp[target - nums[i]], i}; mp[nums[i]] = i; } return {}; }
int main() { vector<int> nums = {2, 7, 11, 15}; auto ans = twoSum(nums, 9); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

