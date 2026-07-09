// Min Heap
// Approach: Use priority_queue as a min-heap.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { priority_queue<int, vector<int>, greater<int>> pq; pq.push(5); pq.push(2); pq.push(8); cout << pq.top() << "\n"; return 0; }

