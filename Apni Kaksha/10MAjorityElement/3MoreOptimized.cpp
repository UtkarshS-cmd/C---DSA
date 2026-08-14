// Majority Element
// Approach: Learn Boyer-Moore voting algorithm.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int majorityMoreOptimized(const vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int x : nums)
        ++freq[x];
    for (unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it)
    {
        if (it->second > nums.size() / 2)
            return it->first;
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityMoreOptimized(nums) << "\n";
    return 0;
}
