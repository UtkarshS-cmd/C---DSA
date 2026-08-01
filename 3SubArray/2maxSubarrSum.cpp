#include<iostream>
using namespace std;

int print(int arr[], int n){
    int currSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i;j < n; j++){
            currSum = max(currSum, arr[i]);
        }
    }
}

int main(){
 
return 0;
}