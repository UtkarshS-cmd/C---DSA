// Peak Index in a Mountain Array
// Approach: Use binary search on a mountain-shaped array.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int peakIndexBrute(const vector<int>& arr) {
    for (int i = 1; i + 1 < (int)arr.size(); ++i) if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) return i;
    return -1;
}

int main() { vector<int> arr = {0, 1, 0}; cout << peakIndexBrute(arr) << "\n"; return 0; }

