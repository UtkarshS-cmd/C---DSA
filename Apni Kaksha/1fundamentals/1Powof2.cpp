// check if a number is power of 2 or not
#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOf2(n))
    {
        cout << n << " is a power of 2." << endl;
    }
    else
    {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}

// dry run
// Input: 8
// 8 > 0 is true
// 8 & (8 - 1) = 8 & 7 = 1000 & 0111 = 0000
// Output: 8 is a power of 2.
