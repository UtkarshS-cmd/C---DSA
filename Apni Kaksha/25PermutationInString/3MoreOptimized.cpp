// Permutation in String
// Approach: Use sliding window with frequency maps.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool checkInclusionMoreOptimized(const string& s1, const string& s2) {
    vector<int> freq(26, 0);
    for (char c : s1) ++freq[c - 'a'];
    int matched = 0, left = 0;
    for (int right = 0; right < (int)s2.size(); ++right) {
        int idx = s2[right] - 'a';
        if (freq[idx] > 0) ++matched;
        --freq[idx];
        if (right - left + 1 > (int)s1.size()) {
            int leftIdx = s2[left++] - 'a';
            if (freq[leftIdx] >= 0) --matched;
            ++freq[leftIdx];
        }
        if (matched == (int)s1.size()) return true;
    }
    return false;
}

int main() { cout << boolalpha << checkInclusionMoreOptimized("ab", "eidbaooo") << "\n"; return 0; }

