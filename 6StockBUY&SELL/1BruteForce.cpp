// Best Time to Buy and Sell Stock
// Approach: Use a single pass and then extend to multiple transactions.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxProfitBrute(const vector<int> &prices)
{
    int best = 0;

    for (int i = 0; i < prices.size(); ++i)
    {
        for (int j = i + 1; j < prices.size(); ++j)
        {
            best = max(best, prices[j] - prices[i]);
        }
    }
    return best;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfitBrute(prices) << "\n";
    return 0;
}
