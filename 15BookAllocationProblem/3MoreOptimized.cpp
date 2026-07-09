// Book Allocation Problem
// Approach: Use binary search over the possible answer range.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canAllocateMoreOptimized(const vector<int>& books, int students, int maxPages) {
    int count = 1, current = 0;
    for (int pages : books) {
        current += pages;
        if (current > maxPages) {
            ++count;
            current = pages;
        }
    }
    return count <= students;
}

int main() { vector<int> books = {10, 20, 30, 40}; int students = 2; int lo = 40, hi = 100; while (lo < hi) { int mid = lo + (hi - lo) / 2; if (canAllocateMoreOptimized(books, students, mid)) hi = mid; else lo = mid + 1; } cout << lo << "\n"; return 0; }

