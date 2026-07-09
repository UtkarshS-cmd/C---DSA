// Container With Most Water
// Approach: Use two pointers to avoid all pair checks.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int maxAreaMoreOptimized(const vector<int>& h) {
    int l = 0, r = (int)h.size() - 1, best = 0;
    while (l < r) {
        int width = r - l;
        int height = min(h[l], h[r]);
        best = max(best, width * height);
        if (h[l] < h[r]) ++l; else --r;
    }
    return best;
}

int main() { vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7}; cout << maxAreaMoreOptimized(h) << "\n"; return 0; }

