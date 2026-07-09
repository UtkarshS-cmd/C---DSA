#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// recursion
int factorialRecursion(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursion(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    cout << "Factorial (Recursion): " << factorialRecursion(n) << endl;
    return 0;
}