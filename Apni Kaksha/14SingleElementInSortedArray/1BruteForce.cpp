// Single Element in a Sorted Array
// Approach: Use binary search or XOR for the single element.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int singleElementBrute(const vector<int>& arr) {
    for (int i = 0; i < (int)arr.size(); ++i) {
        bool found = false;
        for (int j = 0; j < (int)arr.size(); ++j) if (i != j && arr[i] == arr[j]) found = true;
        if (!found) return arr[i];
    }
    return -1;
}

int main() { vector<int> arr = {1, 1, 2, 3, 3, 4, 4}; cout << singleElementBrute(arr) << "\n"; return 0; }

