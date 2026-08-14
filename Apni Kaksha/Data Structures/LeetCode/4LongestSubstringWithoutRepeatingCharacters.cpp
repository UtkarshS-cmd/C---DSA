// LeetCode 3 - Longest Substring Without Repeating Characters
// Approach: Use a sliding window with a set.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) { unordered_set<char> seen; int l = 0, best = 0; for (int r = 0; r < (int)s.size(); ++r) { while (seen.count(s[r])) { seen.erase(s[l++]); } seen.insert(s[r]); best = max(best, r - l + 1); } return best; }
int main() { cout << lengthOfLongestSubstring("abcabcbb") << "\n"; return 0; }

