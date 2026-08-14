// Aggressive Cows Problem
// Approach: Use binary search on the minimum possible distance.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canPlaceMoreOptimized(const vector<int>& stalls, int cows, int minDist) {
    int placed = 1, prev = stalls[0];
    for (int i = 1; i < (int)stalls.size(); ++i) {
        if (stalls[i] - prev >= minDist) {
            ++placed;
            prev = stalls[i];
        }
    }
    return placed >= cows;
}

int main() { vector<int> stalls = {1, 2, 4, 8, 9}; int cows = 3; int lo = 1, hi = 8; while (lo < hi) { int mid = lo + (hi - lo + 1)/2; if (canPlaceMoreOptimized(stalls, cows, mid)) lo = mid; else hi = mid - 1; } cout << lo << "\n"; return 0; }

