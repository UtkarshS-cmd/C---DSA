// Queue Using Array
// Approach: Implement FIFO with a circular array.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

class Queue { vector<int> data; int front = 0; public: void push(int x) { data.push_back(x); } int pop() { if (empty()) return -1; int x = data[front++]; return x; } bool empty() { return front >= (int)data.size(); } };

int main() { Queue q; q.push(1); q.push(2); cout << q.pop() << "\n"; return 0; }

