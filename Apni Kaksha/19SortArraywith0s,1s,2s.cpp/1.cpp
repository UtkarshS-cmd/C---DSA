#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> nums = {1,1,1,2,2,0,0,0,2,1,1,1,2,2};
 int n = nums.size();
 int count0,count1,count2;

 for(int i =0; i < n; i++){
    if(nums[i] == 0) count0++;
    else if(nums[i] == 1) count1++;
    else count2++;
 }

 for(int i = 0; i < count0; i++){
    nums[i++] = 0;
 }
 for(int i = 0; i < count1; i++){
    nums[i++] = 1;
 }
 for(int i = 0; i < count2; i++){
    nums[i++] = 2;
 }

 for(int i = 0; i < n; i++){
    cout<<nums[i]<<" ";
 }
return 0;
}