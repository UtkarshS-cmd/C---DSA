// Single Number
// Approach: Use XOR for O(1) extra space.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

// XOR -> x^x = 0, diff_xor = 1
int singleNumberMoreOptimized(const vector<int> &nums)
{
    int ans = 0;
    for (int x : nums)
        ans ^= x;
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumberMoreOptimized(nums) << "\n";
    return 0;
}
