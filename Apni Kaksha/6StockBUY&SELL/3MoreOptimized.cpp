// Best Time to Buy and Sell Stock
// Approach: Use a single pass and then extend to multiple transactions.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxProfitMoreOptimized(const vector<int> &prices)
{
    int best = 0;
    for (int i = 1; i < prices.size(); ++i)
    {
        if (prices[i] > prices[i - 1])
            best += prices[i] - prices[i - 1];
    }
    return best;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfitMoreOptimized(prices) << "\n";
    return 0;
}
