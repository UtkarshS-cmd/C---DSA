// Valid Palindrome
// Approach: Use two pointers and cleanup for realistic input.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool isPalindromeBrute(string s) {
    string t = s; reverse(t.begin(), t.end()); return t == s;
}

int main() { string s = "abba"; cout << boolalpha << isPalindromeBrute(s) << "\n"; return 0; }

