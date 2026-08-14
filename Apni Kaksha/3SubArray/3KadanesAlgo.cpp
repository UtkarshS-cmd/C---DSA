#include<iostream>
#include<climits>
using namespace std;

// For Sorted Array
int sum(int arr[], int n){
    int currSum = 0, maxSum = INT_MIN;

    for(int i = 0; i < n; i++){

        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
int arr[] = {-1,-2,-10, 3,5,6,7};
int size = sizeof(arr)/sizeof(arr[0]);

int result = sum(arr, size);

cout<<result<<endl;
return 0;
}