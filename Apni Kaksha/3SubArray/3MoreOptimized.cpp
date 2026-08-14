// Maximum Subarray Sum
// Approach: Progress from brute force to Kadane style optimal logic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayMoreOptimized(const vector<int>& arr) {
    int best = INT_MIN, current = 0;
    for (int x : arr) {
        current = max(0, current + x);
        best = max(best, current);
    }
    return best;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarrayMoreOptimized(arr) << "\n";
    return 0;
}

