// Painter Partition Problem
// Approach: Use binary search on the maximum time per painter.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canPaintMoreOptimized(const vector<int>& boards, int painters, int maxTime) {
    int count = 1, total = 0;
    for (int x : boards) {
        total += x;
        if (total > maxTime) {
            ++count;
            total = x;
        }
    }
    return count <= painters;
}

int main() { vector<int> boards = {10, 20, 30, 40}; int lo = 40, hi = 100; while (lo < hi) { int mid = lo + (hi - lo) / 2; if (canPaintMoreOptimized(boards, 2, mid)) hi = mid; else lo = mid + 1; } cout << lo << "\n"; return 0; }

