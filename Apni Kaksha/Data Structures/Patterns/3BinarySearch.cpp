// Binary Search Pattern
// Approach: Apply binary search on sorted data.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { vector<int> arr = {1, 3, 5, 7, 9}; int target = 7; int l = 0, r = (int)arr.size() - 1; while (l <= r) { int m = l + (r - l) / 2; if (arr[m] == target) { cout << m << "\n"; return 0; } if (arr[m] < target) l = m + 1; else r = m - 1; } cout << -1 << "\n"; return 0; }

