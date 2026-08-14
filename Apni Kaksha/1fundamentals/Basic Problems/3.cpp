// 2 min of 2 nos
#include <iostream>
using namespace std;

int minof2(int a, int b)
{
     return (a < b) ? a : b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int minimum = minof2(a, b);
    cout << "Minimum: " << minimum << endl;
    return 0;
}
