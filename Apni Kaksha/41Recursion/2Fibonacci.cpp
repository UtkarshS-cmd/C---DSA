// Recursion Basics
// Approach: Explore factorial, Fibonacci, and backtracking.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int fib(int n) { if (n <= 1) return n; return fib(n - 1) + fib(n - 2); }

int main() { cout << fib(6) << "\n"; return 0; }

