// Pair Sum
// Approach: Move from nested loops to hashing.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> pairSumBrute(const vector<int> &arr, int target)
{
    vector<pair<int, int>> ans;

    for (int i = 0; i < (int)arr.size(); ++i)
    {
        for (int j = i + 1; j < (int)arr.size(); ++j)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back({i, j});
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    vector<pair<int, int>> ans = pairSumBrute(arr, 14);

    for (size_t i = 0; i < ans.size(); ++i)
    {
        cout << ans[i].first << "," << ans[i].second << "\n";
    }

    return 0;
}
