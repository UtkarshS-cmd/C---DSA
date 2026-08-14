// C++ STL Practice
// Approach: Explore containers, iterators, and algorithms.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    set<int> s(v.begin(), v.end());
    unordered_map<int, int> mp;
    mp[1] = 10;
    cout << v.size() << " " << s.size() << " " << mp[1] << "\n";
    return 0;
}

