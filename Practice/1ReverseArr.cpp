#include<iostream>
using namespace std;
 
int main(){ //TC:0(n) 
int arr[] = {70,60,50,40,30,20,10};
int n = sizeof(arr)/sizeof(arr[0]);

 int i = 0, j = n - 1;

 while(i < j){
    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;
    swap(arr[i],arr[j]);
    i++, j--;
 }

 for(int i = 0; i < n; i ++){
    cout<<arr[i]<<" ";
 }

return 0;
}