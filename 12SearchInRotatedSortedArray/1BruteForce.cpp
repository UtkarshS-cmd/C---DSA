// Search in Rotated Sorted Array
// Approach: Use binary search with pivot logic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int searchBrute(const vector<int>& nums, int target) {
    for (int i = 0; i < (int)nums.size(); ++i) 
        if (nums[i] == target) 
            return i;
    return -1;
}

int main() { vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; cout << searchBrute(nums, 0) << "\n"; return 0; }

