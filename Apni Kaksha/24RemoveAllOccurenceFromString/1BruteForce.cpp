// Remove All Occurrences From String
// Approach: Learn string building and erase-remove idiom.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

string removeOccurrencesBrute(string s, char ch) {
    string ans; 
    for (char c : s){
         if (c != ch){
            ans.push_back(c);
        }
    } 
    return ans; 
}

int main() {
     string s = "banana";
     cout << removeOccurrencesBrute(s, 'a') << "\n";
     return 0; }

