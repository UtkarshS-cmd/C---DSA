// Binary to decimal conversion in C++
#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, power = 1;
    while (binary > 0) {
        int rem = binary % 10;
        decimal += rem * power;
        binary /= 10;
        power *= 2;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Decimal representation: " << decimal << endl;

    return 0;
}