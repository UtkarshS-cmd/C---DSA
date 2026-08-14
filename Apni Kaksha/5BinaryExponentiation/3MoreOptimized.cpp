// Fast Exponentiation
// Approach: Reduce time from linear to logarithmic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

long long powerMoreOptimized(long long base, int exp) {
    long long ans = 1;
    while (exp > 0) {
        if (exp & 1) ans *= base;
        base *= base;
        exp >>= 1;
    }
    return ans;
}

int main() { cout << powerMoreOptimized(2, 10) << "\n"; return 0; }

