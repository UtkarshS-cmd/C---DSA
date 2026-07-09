// Binary Search
// Approach: Compare linear search with logarithmic binary search.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int binarySearchBrute(const vector<int>& arr, int target) {
    for (int i = 0; i < (int)arr.size(); ++i) if (arr[i] == target) return i;
    return -1;
}

int main() { vector<int> arr = {1, 3, 5, 7, 9}; cout << binarySearchBrute(arr, 7) << "\n"; return 0; }

