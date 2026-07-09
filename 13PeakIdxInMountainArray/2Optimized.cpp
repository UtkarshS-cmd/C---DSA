// Peak Index in a Mountain Array
// Approach: Use binary search on a mountain-shaped array.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int peakIndexOptimized(const vector<int>& arr) {
    int l = 0, r = (int)arr.size() - 1;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] < arr[m + 1]) l = m + 1;
        else r = m;
    }
    return l;
}

int main() { vector<int> arr = {0, 2, 1, 0}; cout << peakIndexOptimized(arr) << "\n"; return 0; }

