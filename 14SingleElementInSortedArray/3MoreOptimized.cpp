// Single Element in a Sorted Array
// Approach: Use binary search or XOR for the single element.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int singleElementMoreOptimized(const vector<int>& arr) {
    int ans = 0;
    for (int x : arr) ans ^= x;
    return ans;
}

int main() { vector<int> arr = {1, 1, 2, 3, 3, 4, 4}; cout << singleElementMoreOptimized(arr) << "\n"; return 0; }

