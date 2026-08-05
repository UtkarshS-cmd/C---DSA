// Reverse Words in a String
// Approach: Reverse the whole string and then each word.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string reverseWordsBrute(string s) {
    string ans; string word; vector<string> words; 
    for (char c : s) { 
        if (c == ' ') 
        { if (!word.empty()) 
            words.push_back(word); word.clear(); }
             else word.push_back(c); } 
             if (!word.empty()) words.push_back(word); for (int i = (int)words.size() - 1; i >= 0; --i) { if (i != (int)words.size() - 1) ans.push_back(' '); ans += words[i]; } return ans; }

int main() { string s = "hello world from cpp"; cout << reverseWordsBrute(s) << "\n"; return 0; }

