// Recursion Basics
// Approach: Explore factorial, Fibonacci, and backtracking.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) { if (n <= 1) return 1; return n * factorial(n - 1); }

int main() { cout << factorial(5) << "\n"; return 0; }

