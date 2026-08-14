// Single Element in a Sorted Array
// Approach: Use binary search or XOR for the single element.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int singleElementOptimized(const vector<int>& arr) {
    int l = 0, r = (int)arr.size() - 1;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (m % 2 == 0) {
            if (arr[m] == arr[m + 1]) l = m + 2;
            else r = m;
        } else {
            if (arr[m] == arr[m - 1]) l = m + 1;
            else r = m - 1;
        }
    }
    return arr[l];
}

int main() { vector<int> arr = {1, 1, 2, 3, 3, 4, 4}; cout << singleElementOptimized(arr) << "\n"; return 0; }

