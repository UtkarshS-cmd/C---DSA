#include<iostream>
using namespace std;

// 3->Optimized space complexity
int main() {
    int a[] = {1, 2, 3, 4};
    int n = 4;
    int ans[n], suffix = 1;

    // Step 1: Prefix products stored in ans
    ans[0] = 1;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * a[i - 1];
    }

    // Step 2: Multiply by suffix products on the fly
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= a[i];
    }

    // Step 3: Print result
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}