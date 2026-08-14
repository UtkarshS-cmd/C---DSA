// Subarray Sum Equals K
// Approach: Use prefix sums with hashing for O(n).
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int subarraySumOptimized(const vector<int>& nums, int k) { unordered_map<int, int> prefix; int sum = 0, count = 0; prefix[0] = 1; for (int x : nums) { sum += x; count += prefix[sum - k]; prefix[sum]++; } return count; }

int main() { vector<int> nums = {1, 1, 1}; cout << subarraySumOptimized(nums, 2) << "\n"; return 0; }

