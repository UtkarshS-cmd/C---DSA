// Single Number
// Approach: Use XOR for O(1) extra space.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int singleNumberOptimized(const vector<int> &nums)
{
    unordered_map<int, int> freq;

    for (int x : nums)
    {
        ++freq[x];
    }

    for (unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it)
    {
        if (it->second == 1)
        {
            return it->first;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumberOptimized(nums) << "\n";
    return 0;
}
