// C++ STL Practice
// Approach: Explore containers, iterators, and algorithms.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2};
    sort(v.begin(), v.end());
    auto it = lower_bound(v.begin(), v.end(), 2);
    cout << *it << "\n";
    return 0;
}

