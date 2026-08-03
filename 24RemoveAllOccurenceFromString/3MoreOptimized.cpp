// Remove All Occurrences From String
// Approach: Learn string building and erase-remove idiom.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string removeOccurrencesMoreOptimized(string s, char ch) {
    s.erase(remove(s.begin(), s.end(), ch), s.end());
     return s;
}

int main() { string s = "banana"; cout << removeOccurrencesMoreOptimized(s, 'a') << "\n"; return 0; }

