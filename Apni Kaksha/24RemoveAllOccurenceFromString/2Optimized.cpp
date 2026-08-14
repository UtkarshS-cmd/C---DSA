// Remove All Occurrences From String
// Approach: Learn string building and erase-remove idiom.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string removeOccurrencesOptimized(string s, char ch) {
    string ans; 
    ans.reserve(s.size()); 
    
    for (char c : s) {if (c != ch) ans.push_back(c);}
     return ans; }

int main() { string s = "banana"; cout << removeOccurrencesOptimized(s, 'a') << "\n"; return 0; }

