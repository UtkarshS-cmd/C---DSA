// Painter Partition Problem
// Approach: Use binary search on the maximum time per painter.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int minTimeBrute(const vector<int>& boards, int painters) {
    int ans = INT_MAX;
    for (int i = 0; i < (int)boards.size(); ++i) {
        int current = 0, count = 1;
        for (int j = i; j < (int)boards.size(); ++j) {
            if (current + boards[j] > 100) { ++count; current = boards[j]; }
            else current += boards[j];
        }
        ans = min(ans, current);
    }
    return ans;
}

int main() { vector<int> boards = {10, 20, 30, 40}; cout << minTimeBrute(boards, 2) << "\n"; return 0; }

