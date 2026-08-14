// Painter Partition Problem
// Approach: Use binary search on the maximum time per painter.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canPaint(const vector<int>& boards, int painters, int maxTime) {
    int count = 1, current = 0;
    for (int x : boards) {
        if (current + x <= maxTime) current += x;
        else { ++count; current = x; }
    }
    return count <= painters;
}

int main() { vector<int> boards = {10, 20, 30, 40}; int lo = 40, hi = 100; while (lo < hi) { int mid = lo + (hi - lo) / 2; if (canPaint(boards, 2, mid)) hi = mid; else lo = mid + 1; } cout << lo << "\n"; return 0; }

