// Fast Exponentiation
// Approach: Reduce time from linear to logarithmic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

long long powerOptimized(long long base, int exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        long long half = powerOptimized(base, exp / 2);
        return half * half;
    }
    return base * powerOptimized(base, exp - 1);
}

int main() { cout << powerOptimized(2, 10) << "\n"; return 0; }

