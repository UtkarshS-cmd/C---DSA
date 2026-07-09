// Sliding Window Pattern
// Approach: Use a window to optimize repeated subarray checks.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { vector<int> nums = {1, 3, 2, 6, -1, 4, 1, 8, 2}; int k = 3; int sum = 0; for (int i = 0; i < k; ++i) sum += nums[i]; int best = sum; for (int i = k; i < (int)nums.size(); ++i) { sum += nums[i] - nums[i - k]; best = max(best, sum); } cout << best << "\n"; return 0; }

