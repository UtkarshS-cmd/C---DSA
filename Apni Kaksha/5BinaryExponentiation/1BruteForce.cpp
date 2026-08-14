// Fast Exponentiation
// Approach: Reduce time from linear to logarithmic.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

long long powerBrute(long long base, int exp) {
    long long ans = 1;
    for (int i = 0; i < exp; ++i) ans *= base;
    return ans;
}

int main() { cout << powerBrute(2, 10) << "\n"; return 0; }

