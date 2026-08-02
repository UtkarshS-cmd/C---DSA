#include<iostream>
using namespace std;

// 2->Optimized
int main(){
     int a[] = {1,2,3,4};
     int n = 4;
     int prefix[n], suffix[n];

    //  prefix
    prefix[0] = 1;
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1]*a[i-1];
    }

    // suffix
    suffix[0] = 1;
    for(int i = n - 2; i >= 0; i--){
        suffix[i] = suffix[i+1]*a[i+1];
    }

    for(int i = 0; i < n; i++){
        a[i] = prefix[i]*suffix[i];
        cout<<a[i]<<" ";
    }
}
