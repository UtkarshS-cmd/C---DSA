#include<iostream>
using namespace std;

// Logic
  void segrregat0and1(vector<int> &arr){
        int i = 0, j = arr.size() - 1;

        while(i < j){
            if(arr[i] == 0) i++;
            if(arr[j] = 1) j--;
            if(arr[i] == 1 && arr[j] == 0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
    }

int main(){

    // int a[] = {0,1,0,1,0,0,1,1,1,0};
    // int n = sizeof(a)/sizeof(a[0]);

    // int count0 = 0, count1 = 0;
    // for(int i = 0; i < n; i++){
    //     if(a[i] == 0) count0++;
    //     else count1++;
    // }

    // for(int i = 0; i < count0; i++){
    //     a[i] = 0;   
    // }

    // for(int i = count0; i < n; i++){
    //     a[i] = 1;   
    // }

    // for(int i = 0; i < n; i++){
    //     cout<<a[i]<<" ";    
    // }

  


return 0;
}