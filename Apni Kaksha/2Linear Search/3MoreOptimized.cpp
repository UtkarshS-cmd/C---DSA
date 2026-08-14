// Linear Search - More Optimized
// Approach: Use a sentinel trick to reduce branching.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int linearSearchMoreOptimized(vector<int> arr, int target)
{
    int n = arr.size();
    if (n == 0)
        return -1;

    int last = arr[n - 1];
    arr[n - 1] = target;
    
    int i = 0;
    while (arr[i] != target)
        ++i;
    arr[n - 1] = last;

    return (i < n - 1 || last == target) ? i : -1;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10};
    int target = 8;
    cout << "Index: " << linearSearchMoreOptimized(arr, target) << "\n";
    return 0;
}
