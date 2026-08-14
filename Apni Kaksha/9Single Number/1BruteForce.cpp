// Single Number
// Approach: Use XOR for O(1) extra space.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int singleNumberBrute(const vector<int> &nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (i != j && nums[i] == nums[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            return nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumberBrute(nums) << "\n";
    return 0;
}
