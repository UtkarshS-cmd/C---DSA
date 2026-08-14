// Linear Search - Brute Force
// Approach: Check every element one by one.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int linearSearchBrute(const vector<int>& arr, int target) {
    for (int i = 0; i < (int)arr.size(); ++i) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 7, 2, 9, 1};
    int target = 9;
    cout << "Index: " << linearSearchBrute(arr, target) << "\n";
    return 0;
}

