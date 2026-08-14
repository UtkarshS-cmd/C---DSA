#include<iostream>
using namespace std;
 
int main(){
 int arr[] = {1,2,3,4,5,6,7};
 int n = 7;
 int key = 3;

 int i = 0, j = 0;
 while(i < j){
    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;
    swap(arr[i],arr[j]);
    i++, j--;
 }

for(int i = 0; i < key; i++){
  swap(arr[i],arr[key - 1]);
}

for(int key = key; j < n; key++){
   swap(arr[key],arr[n -1]);
}

for(int i = 0; i < n; i++){
  cout<<arr[i]<<" ";
}

return 0;
}