// Book Allocation Problem
// Approach: Use binary search over the possible answer range.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool canAllocateBrute(const vector<int>& books, int students, int maxPages) {
    int current = 0, count = 1;
    for (int pages : books) {
        if (current + pages > maxPages) {
            ++count;
            current = pages;
        } else current += pages;
    }
    return count <= students;
}

int main() { vector<int> books = {10, 20, 30, 40}; int students = 2; int low = 40, high = 100; bool ok = false; for (int mid = low; mid <= high; ++mid) if (canAllocateBrute(books, students, mid)) { ok = true; break; } cout << boolalpha << ok << "\n"; return 0; }

