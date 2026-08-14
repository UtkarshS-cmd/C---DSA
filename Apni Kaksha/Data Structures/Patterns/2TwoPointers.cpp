// Two Pointers Pattern
// Approach: Move two indices towards each other.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { string s = "abcba"; int l = 0, r = (int)s.size() - 1; bool ok = true; while (l < r) { if (s[l] != s[r]) ok = false; ++l; --r; } cout << boolalpha << ok << "\n"; return 0; }

