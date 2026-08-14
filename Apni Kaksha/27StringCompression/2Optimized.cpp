// String Compression
// Approach: Use run-length encoding with a single pass.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string compressOptimized(const string& s) {
    string ans; int count = 1; for (int i = 1; i <= (int)s.size(); ++i) { if (i < (int)s.size() && s[i] == s[i - 1]) ++count; else { ans += s[i - 1]; ans += to_string(count); count = 1; } } return ans.size() < s.size() ? ans : s;
}

int main() { string s = "aaabbc"; cout << compressOptimized(s) << "\n"; return 0; }

