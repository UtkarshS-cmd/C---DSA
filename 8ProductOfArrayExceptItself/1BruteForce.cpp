// Product of Array Except Itself
// Approach: Use prefix and suffix products.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelfBrute(const vector<int>& nums) {
    vector<int> ans(nums.size());
    for (int i = 0; i < (int)nums.size(); ++i) {
        int prod = 1;
        for (int j = 0; j < (int)nums.size(); ++j) {
            if (i != j) prod *= nums[j];
        }
        ans[i] = prod;
    }
    return ans;
}

int main() { vector<int> nums = {1, 2, 3, 4}; auto ans = productExceptSelfBrute(nums); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

