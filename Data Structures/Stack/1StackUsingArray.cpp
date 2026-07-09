// Stack Using Array
// Approach: Implement LIFO with a vector.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

class Stack { vector<int> data; public: void push(int x) { data.push_back(x); } int pop() { if (empty()) return -1; int x = data.back(); data.pop_back(); return x; } bool empty() { return data.empty(); } };

int main() { Stack st; st.push(10); st.push(20); cout << st.pop() << "\n"; return 0; }

