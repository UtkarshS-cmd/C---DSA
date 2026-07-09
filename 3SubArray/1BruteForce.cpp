// Maximum Subarray Sum
// Approach: Progress from brute force to Kadane style optimal logic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayBrute(const vector<int>& arr) {
    int best = INT_MIN;
    for (int i = 0; i < (int)arr.size(); ++i) {
        int sum = 0;
        for (int j = i; j < (int)arr.size(); ++j) {
            sum += arr[j];
            best = max(best, sum);
        }
    }
    return best;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarrayBrute(arr) << "\n";
    return 0;
}

