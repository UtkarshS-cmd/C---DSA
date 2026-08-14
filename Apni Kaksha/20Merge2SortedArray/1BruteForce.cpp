// Merge Two Sorted Arrays
// Approach: Use efficient merge logic with two pointers.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> mergeBrute(const vector<int>& a, const vector<int>& b) {
    vector<int> merged = a; merged.insert(merged.end(), b.begin(), b.end()); sort(merged.begin(), merged.end()); return merged;
}

int main() { vector<int> a = {1, 3, 5}; vector<int> b = {2, 4, 6}; auto ans = mergeBrute(a, b); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

