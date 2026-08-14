// Maximum Subarray Sum
// Approach: Progress from brute force to Kadane style optimal logic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayOptimized(const vector<int>& arr) {
    int best = arr[0], current = arr[0];
    
    for (int i = 1; i < (int)arr.size(); ++i) {
        current = max(arr[i], current + arr[i]);
        best = max(best, current);
    }
    return best;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarrayOptimized(arr) << "\n";
    return 0;
}

