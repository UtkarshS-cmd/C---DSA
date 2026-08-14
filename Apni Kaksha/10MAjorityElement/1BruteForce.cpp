// Majority Element
// Approach: Learn Boyer-Moore voting algorithm.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int majorityBrute(const vector<int> &nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); ++j)
            if (nums[j] == nums[i])
                ++count;
        if (count > nums.size() / 2)
            return nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityBrute(nums) << "\n";
    return 0;
}
