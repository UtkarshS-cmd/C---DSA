#include<iostream>
using namespace std;
 
int main(){

    int a[] = {0,1,0,1,0,0,1,1,1,0};
    int n = sizeof(a)/sizeof(a[0]);

    int count0 = 0, count1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0) count0++;
        else count1++;
    }

    for(int i = 0; i < count0; i++){
        a[i] = 0;   
    }

    for(int i = count0; i < n; i++){
        a[i] = 1;   
    }

    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";    
    }


return 0;
}