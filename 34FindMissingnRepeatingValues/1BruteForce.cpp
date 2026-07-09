// Find Missing and Repeating Values
// Approach: Use frequency arrays or in-place placement.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

pair<int,int> findMissingRepeatingBrute(vector<int> nums) { for (int i = 1; i <= nums.size(); ++i) { int count = 0; for (int x : nums) if (x == i) ++count; if (count == 0) return {i, -1}; } return {-1, -1}; }

int main() { vector<int> nums = {1, 2, 2, 4}; auto ans = findMissingRepeatingBrute(nums); cout << ans.first << ' ' << ans.second << "\n"; return 0; }

