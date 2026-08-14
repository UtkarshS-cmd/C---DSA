// Aggressive Cows Problem
// Approach: Use binary search on the minimum possible distance.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canPlaceBrute(const vector<int>& stalls, int cows, int minDist) {
    int placed = 1, last = stalls[0];
    for (int i = 1; i < (int)stalls.size(); ++i) {
        if (stalls[i] - last >= minDist) {
            ++placed;
            last = stalls[i];
        }
    }
    return placed >= cows;
}

int main() { vector<int> stalls = {1, 2, 4, 8, 9}; int cows = 3; cout << boolalpha << canPlaceBrute(stalls, cows, 3) << "\n"; return 0; }

