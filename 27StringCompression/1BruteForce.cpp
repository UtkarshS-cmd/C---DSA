// String Compression
// Approach: Use run-length encoding with a single pass.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string compressBrute(const string& s) {
    string ans; for (int i = 0; i < (int)s.size(); ++i) { ans += s[i]; int j = i + 1; while (j < (int)s.size() && s[j] == s[i]) ++j; ans += to_string(j - i); i = j - 1; }
    return ans.size() < s.size() ? ans : s;
}

int main() { string s = "aaabbc"; cout << compressBrute(s) << "\n"; return 0; }

