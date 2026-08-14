// Pair Sum
// Approach: Move from nested loops to hashing.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool pairSumMoreOptimized(const vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.find(target - x) != seen.end()) return true;
        seen.insert(x);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    cout << boolalpha << pairSumMoreOptimized(arr, 14) << "\n";
    return 0;
}

