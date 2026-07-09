// Math for DSA
// Approach: Practice prime checks, GCD, and modulo arithmetic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { while (b) { int t = a % b; a = b; b = t; } return a; }

int main() { cout << gcd(48, 18) << "\n"; return 0; }

