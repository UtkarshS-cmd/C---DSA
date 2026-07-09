#include<iostream>
using namespace std;

int decimalToBinary(int decimal) {
    int ans = 0, power = 1;
    while (decimal > 0) {
        int rem = decimal % 2;
        ans += rem * power;
        decimal /= 2;
        power *= 10;
    }
    return ans;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;

    return 0;
}