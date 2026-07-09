// Best Time to Buy and Sell Stock
// Approach: Use a single pass and then extend to multiple transactions.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxProfitOptimized(const vector<int>& prices) {
    int minPrice = prices[0], best = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        best = max(best, price - minPrice);
    }
    return best;
}

int main() { vector<int> prices = {7, 1, 5, 3, 6, 4}; cout << maxProfitOptimized(prices) << "\n"; return 0; }

