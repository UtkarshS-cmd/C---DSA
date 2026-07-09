// Next Permutation
// Approach: Rearrange in-place using a single pass approach.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void nextPermutationMoreOptimized(vector<int>& nums) {
    int i = (int)nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) --i;
    if (i >= 0) {
        int j = (int)nums.size() - 1;
        while (nums[j] <= nums[i]) --j;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}

int main() { vector<int> nums = {3, 2, 1}; nextPermutationMoreOptimized(nums); for (int x : nums) cout << x << ' '; cout << "\n"; return 0; }

