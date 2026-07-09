#include <iostream>
using namespace std;

int findSubarray(int arr[], int size)
{
    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    findSubarray(arr, n);
    return 0;
}

// #output
// 1 2 3 4 5
//