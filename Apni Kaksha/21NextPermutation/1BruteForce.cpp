// Next Permutation
// Approach: Rearrange in-place using a single pass approach.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void nextPermutationBrute(vector<int>& nums) {
    next_permutation(nums.begin(), nums.end());
}

int main() { vector<int> nums = {1, 2, 3}; nextPermutationBrute(nums); for (int x : nums) cout << x << ' '; cout << "\n"; return 0; }

