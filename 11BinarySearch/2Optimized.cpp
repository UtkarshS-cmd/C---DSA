// Binary Search
// Approach: Compare linear search with logarithmic binary search.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int binarySearchOptimized(const vector<int> &arr, int target)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == target)
            return m;
        if (arr[m] < target)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << binarySearchOptimized(arr, 7) << "\n";
    return 0;
}
