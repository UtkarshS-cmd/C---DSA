// Reverse Words in a String
// Approach: Reverse the whole string and then each word.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string reverseWordsMoreOptimized(string s) {
    reverse(s.begin(), s.end());
    int n = (int)s.size(); int i = 0;
    while (i < n) {
        while (i < n && s[i] == ' ') ++i;
        int j = i;
        while (j < n && s[j] != ' ') ++j;
        reverse(s.begin() + i, s.begin() + j);
        i = j + 1;
    }
    return s;
}

int main() { string s = "hello world from cpp"; cout << reverseWordsMoreOptimized(s) << "\n"; return 0; }

