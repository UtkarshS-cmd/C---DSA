// Valid Palindrome
// Approach: Use two pointers and cleanup for realistic input.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool isPalindromeOptimized(string s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int main() { string s = "abba"; cout << boolalpha << isPalindromeOptimized(s) << "\n"; return 0; }

