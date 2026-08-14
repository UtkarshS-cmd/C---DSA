// Sort Array with 0s, 1s, 2s
// Approach: Use Dutch National Flag approach for linear time.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

void sortColorsBrute(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}

int main() { 
    vector<int> nums = {2, 0, 2, 1, 1, 0}; 
    sortColorsBrute(nums); 
    for (int x : nums) 
        cout << x << ' '; 
        cout << "\n"; return 0; }

