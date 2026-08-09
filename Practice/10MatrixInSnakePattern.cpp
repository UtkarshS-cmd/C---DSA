#include<iostream>
using namespace std;
 
int main(){
 int arr[][4] = {{9,4,8,5}, {6,1,1,51}, {2,2,3,6}};

 int maxSum = 0, sum;
 for(int i = 0; i < 3; i++){
    if(i % 2 == 0){
    for(int j = 0; j < 4 ; j++){
        cout<<arr[i][j]<<" ";
    }   
    }
    else{
        for(int j = 3; j >= 0 ; j--){
            cout<<arr[i][j]<<" ";
        } 
    }
 }

return 0;
}