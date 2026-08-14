// Sort Array with 0s, 1s, 2s
// Approach: Use Dutch National Flag approach for linear time.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void sortColorsOptimized(vector<int>& nums) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int x : nums) { if (x == 0) ++cnt0; else if (x == 1) ++cnt1; else ++cnt2; }
    int i = 0; while (cnt0--) nums[i++] = 0; while (cnt1--) nums[i++] = 1; while (cnt2--) nums[i++] = 2;
}

int main() { vector<int> nums = {2, 0, 2, 1, 1, 0}; sortColorsOptimized(nums); for (int x : nums) cout << x << ' '; cout << "\n"; return 0; }

