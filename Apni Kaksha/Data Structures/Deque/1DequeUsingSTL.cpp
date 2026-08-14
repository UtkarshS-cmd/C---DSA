// Deque Using STL
// Approach: Use std::deque for fast push/pop on both ends.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int main() { deque<int> dq = {1, 2}; dq.push_front(0); dq.push_back(3); cout << dq.front() << ' ' << dq.back() << "\n"; return 0; }

