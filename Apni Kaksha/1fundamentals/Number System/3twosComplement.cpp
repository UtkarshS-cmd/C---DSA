#include<iostream>
using namespace std;

int twosComplement(int n, int bits) {
    int mask = (1 << bits) - 1; // Create a mask with the specified number of bits
    return (~n + 1) & mask; // Calculate two's complement and apply the mask
}

int main() {
    int n, bits;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of bits: ";
    cin >> bits;

    int result = twosComplement(n, bits);
    cout << "Two's Complement: " << result << endl;

    return 0;
}