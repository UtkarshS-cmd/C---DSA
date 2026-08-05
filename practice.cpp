#include<iostream>
using namespace std;

int main(){

int arr[] = {1,2,3,4,5};
int size = 5;
int ele_to_searc = 5;

for(int i = 0; i < size; i++){
        if(arr[i] == ele_to_searc){
            cout<<"Element found at index" <<i<<endl;
            break;
        }
}

return 0;
}
































































