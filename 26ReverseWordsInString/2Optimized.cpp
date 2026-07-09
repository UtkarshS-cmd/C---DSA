// Reverse Words in a String
// Approach: Reverse the whole string and then each word.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string reverseWordsOptimized(string s) {
    istringstream iss(s);
    vector<string> words; string word;
    while (iss >> word) words.push_back(word);
    reverse(words.begin(), words.end());
    string ans; for (int i = 0; i < (int)words.size(); ++i) { if (i) ans += ' '; ans += words[i]; }
    return ans;
}

int main() { string s = "hello world from cpp"; cout << reverseWordsOptimized(s) << "\n"; return 0; }

