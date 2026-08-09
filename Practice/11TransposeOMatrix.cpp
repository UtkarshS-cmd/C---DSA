#include<iostream>
using namespace std;
 
// Transpose of a matrix
int main(){
int arr[][4] = {{9,4,8,5}, {6,1,1,51}, {2,2,3,6}};
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4 ; j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
return 0;
}