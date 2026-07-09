// Book Allocation Problem
// Approach: Use binary search over the possible answer range.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canAllocateOptimized(const vector<int>& books, int students, int maxPages) {
    int count = 1, sum = 0;
    for (int pages : books) {
        if (sum + pages <= maxPages) sum += pages;
        else { ++count; sum = pages; }
    }
    return count <= students;
}

int main() { vector<int> books = {10, 20, 30, 40}; int students = 2; int lo = 10, hi = 100; while (lo < hi) { int mid = lo + (hi - lo) / 2; if (canAllocateOptimized(books, students, mid)) hi = mid; else lo = mid + 1; } cout << lo << "\n"; return 0; }

