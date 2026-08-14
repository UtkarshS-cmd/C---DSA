// Permutation in String
// Approach: Use sliding window with frequency maps.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool checkInclusionOptimized(const string& s1, const string& s2) {
    vector<int> need(26, 0), window(26, 0);
    for (char c : s1) ++need[c - 'a'];
    for (int i = 0; i < (int)s2.size(); ++i) {
        ++window[s2[i] - 'a'];
        if (i >= (int)s1.size()) --window[s2[i - (int)s1.size()] - 'a'];
        if (window == need) return true;
    }
    return false;
}

int main() { cout << boolalpha << checkInclusionOptimized("ab", "eidbaooo") << "\n"; return 0; }

