// Valid Palindrome
// Approach: Use two pointers and cleanup for realistic input.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool isPalindromeMoreOptimized(string s) {
    string cleaned;
    for (char c : s) if (isalnum(c)) cleaned += tolower(c);
    int l = 0, r = (int)cleaned.size() - 1;
    while (l < r) { if (cleaned[l] != cleaned[r]) return false; ++l; --r; }
    return true;
}

int main() { string s = "A man, a plan, a canal: Panama"; cout << boolalpha << isPalindromeMoreOptimized(s) << "\n"; return 0; }

