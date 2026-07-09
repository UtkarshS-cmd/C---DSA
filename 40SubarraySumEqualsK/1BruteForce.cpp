// Subarray Sum Equals K
// Approach: Use prefix sums with hashing for O(n).
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int subarraySumBrute(const vector<int>& nums, int k) { int count = 0; for (int i = 0; i < (int)nums.size(); ++i) { int sum = 0; for (int j = i; j < (int)nums.size(); ++j) { sum += nums[j]; if (sum == k) ++count; } } return count; }

int main() { vector<int> nums = {1, 1, 1}; cout << subarraySumBrute(nums, 2) << "\n"; return 0; }

