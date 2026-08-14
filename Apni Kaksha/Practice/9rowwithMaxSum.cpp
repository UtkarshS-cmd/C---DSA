#include<iostream>
using namespace std;
 
int main(){
 int arr[][4] = {{9,4,8,5}, {6,1,1,51}, {2,2,3,6}};

 int maxSum = 0, sum;
 for(int i = 0; i < 3; i++){
    maxSum = max(maxSum, sum);
    sum = 0;
    for(int j = 0; j < 4 ; j++){
        sum += arr[i][j];
    }
 }

 cout<<"Maximum Sum is: "<<maxSum<<endl;
return 0;
}