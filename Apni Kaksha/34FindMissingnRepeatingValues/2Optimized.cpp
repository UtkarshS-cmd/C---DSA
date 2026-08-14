// Find Missing and Repeating Values
// Approach: Use frequency arrays or in-place placement.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

pair<int,int> findMissingRepeatingOptimized(vector<int> nums) { vector<int> freq(nums.size() + 1, 0); for (int x : nums) ++freq[x]; int missing = -1, repeating = -1; for (int i = 1; i <= (int)nums.size(); ++i) { if (freq[i] == 0) missing = i; if (freq[i] == 2) repeating = i; } return {missing, repeating}; }

int main() { vector<int> nums = {1, 2, 2, 4}; auto ans = findMissingRepeatingOptimized(nums); cout << ans.first << ' ' << ans.second << "\n"; return 0; }

