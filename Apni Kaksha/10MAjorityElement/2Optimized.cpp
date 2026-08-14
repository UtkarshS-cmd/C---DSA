// Majority Element
// Approach: Learn Boyer-Moore voting algorithm.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int majorityOptimized(const vector<int> &nums)
{
    int candidate = 0, count = 0;
    for (int x : nums)
    {
        if (count == 0)
            candidate = x;
        count += (x == candidate) ? 1 : -1;
        // above is same as'
        // if(candidate == x){
        //     count++
        // }
        // else{
        //     count--
        // }
    }
    return candidate;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityOptimized(nums) << "\n";
    return 0;
}
