// Math for DSA
// Approach: Practice prime checks, GCD, and modulo arithmetic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) { if (n < 2) return false; for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false; return true; }

int main() { for (int i = 2; i <= 30; ++i) if (isPrime(i)) cout << i << ' '; cout << "\n"; return 0; }

