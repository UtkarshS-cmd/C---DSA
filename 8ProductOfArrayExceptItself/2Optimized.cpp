// Product of Array Except Itself
// Approach: Use prefix and suffix products.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelfOptimized(const vector<int>& nums) {
    vector<int> ans(nums.size(), 1);
    vector<int> prefix(nums.size(), 1);
    for (int i = 1; i < (int)nums.size(); ++i) prefix[i] = prefix[i - 1] * nums[i - 1];
    int suffix = 1;
    for (int i = (int)nums.size() - 1; i >= 0; --i) {
        ans[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main() { vector<int> nums = {1, 2, 3, 4}; auto ans = productExceptSelfOptimized(nums); for (int x : ans) cout << x << ' '; cout << "\n"; return 0; }

