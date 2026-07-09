// Binary Search
// Approach: Compare linear search with logarithmic binary search.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int binarySearchMoreOptimized(const vector<int>& arr, int target) {
    int l = 0, r = (int)arr.size();
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] < target) l = m + 1;
        else r = m;
    }
    return (l < (int)arr.size() && arr[l] == target) ? l : -1;
}

int main() { vector<int> arr = {1, 3, 5, 7, 9}; cout << binarySearchMoreOptimized(arr, 7) << "\n"; return 0; }

