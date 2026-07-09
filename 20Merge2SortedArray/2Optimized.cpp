// Merge Two Sorted Arrays
// Approach: Use efficient merge logic with two pointers.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> mergeOptimized(const vector<int>& a, const vector<int>& b) {
    vector<int> merged; int i = 0, j = 0;
    while (i < (int)a.size() && j < (int)b.size()) { if (a[i] < b[j]) merged.push_back(a[i++]); else merged.push_back(b[j++]); }
    while (i < (int)a.size()) merged.push_back(a[i++]); while (j < (int)b.size()) merged.push_back(b[j++]);
    return merged;
}

int main() { vector<int> a = {1, 3, 5}; vector<int> b = {2, 4, 6}; auto ans = mergeOptimized(a, b); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

