// #include<iostream>
// #include<climits>
// using namespace std;

// int secondLargest(int arr[], int n){
//     int maxEle = INT_MIN,  maxIndex;
//     for(int i = 0; i < n;i++){
//         maxEle = max(maxEle, arr[i]);
//     }

//      for(int j = 0; j < n;j++){
//        if(arr[j] == maxEle){
//             maxIndex = j;
//             break;
//        }
//     }
//     // cout<<maxIndex<<endl;

//     for(int i = 0; i < n;i++){
//         if(i == maxIndex){
//             continue;
//         }
//         maxEle = max(maxEle, arr[i]);
//     }

//     return maxEle;
// }

// int main(){
// int arr[] = {124,235,1235,64,3};
// int n = sizeof(arr)/sizeof(arr[0]);
// int result = secondLargest(arr, n);

// cout<<"Second Largest: "<<result<<endl;

// return 0;
// }

#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
    int maxEle = INT_MIN;
    int secondMax = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxEle) {
            secondMax = maxEle;
            maxEle = arr[i];
        } else if (arr[i] > secondMax && arr[i] != maxEle) {
            secondMax = arr[i];
        }
    }
    
    return secondMax;
}

int main() {
    int arr[] = {124, 235, 1235, 64, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargest(arr, n);
    cout << "Second Largest: " << result << endl;
    return 0;
}
