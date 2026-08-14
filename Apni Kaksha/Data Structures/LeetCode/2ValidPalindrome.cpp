// LeetCode 125 - Valid Palindrome
// Approach: Two-pointer solution for palindrome checks.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) { int l = 0, r = (int)s.size() - 1; while (l < r) { while (l < r && !isalnum(s[l])) ++l; while (l < r && !isalnum(s[r])) --r; if (tolower(s[l]) != tolower(s[r])) return false; ++l; --r; } return true; }
int main() { cout << boolalpha << isPalindrome("A man, a plan, a canal: Panama") << "\n"; return 0; }

