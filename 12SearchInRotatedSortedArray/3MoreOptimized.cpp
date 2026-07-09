// Search in Rotated Sorted Array
// Approach: Use binary search with pivot logic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int searchMoreOptimized(const vector<int>& nums, int target) {
    int l = 0, r = (int)nums.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == target) return m;
        if (nums[m] >= nums[l]) {
            if (nums[l] <= target && target < nums[m]) r = m - 1;
            else l = m + 1;
        } else {
            if (nums[m] < target && target <= nums[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main() { vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; cout << searchMoreOptimized(nums, 0) << "\n"; return 0; }

