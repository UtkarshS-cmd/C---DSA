// Sort Array with 0s, 1s, 2s
// Approach: Use Dutch National Flag approach for linear time.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void sortColorsMoreOptimized(vector<int>& nums) {
    int low = 0, mid = 0, high = (int)nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1) ++mid;
        else swap(nums[mid], nums[high--]);
    }
}

int main() { vector<int> nums = {2, 0, 2, 1, 1, 0}; sortColorsMoreOptimized(nums); for (int x : nums) cout << x << ' '; cout << "\n"; return 0; }

