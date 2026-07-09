// Product of Array Except Itself
// Approach: Use prefix and suffix products.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelfMoreOptimized(vector<int> nums) {
    int n = (int)nums.size();
    vector<int> ans(n, 1);
    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        ans[i] *= prefix;
        prefix *= nums[i];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main() { vector<int> nums = {1, 2, 3, 4}; auto ans = productExceptSelfMoreOptimized(nums); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

