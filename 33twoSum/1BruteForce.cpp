// Two Sum
// Approach: Use a hash map to solve in linear time.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumBrute(const vector<int>& nums, int target) { for (int i = 0; i < (int)nums.size(); ++i) for (int j = i + 1; j < (int)nums.size(); ++j) if (nums[i] + nums[j] == target) return {i, j}; return {}; }

int main() { vector<int> nums = {2, 7, 11, 15}; auto ans = twoSumBrute(nums, 9); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

