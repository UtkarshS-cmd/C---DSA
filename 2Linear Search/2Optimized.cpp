// Linear Search - Optimized
// Approach: Early exit when the target is found.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int linearSearchOptimized(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == target)
            return i;
        if (arr[i] > target)
            break; // useful when the array is sorted asc
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 7;
    cout << "Index: " << linearSearchOptimized(arr, target) << "\n";
    return 0;
}
