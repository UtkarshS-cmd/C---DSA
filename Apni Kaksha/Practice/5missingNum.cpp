 #include<iostream>
 #include<vector>
 #include<algorithm>
 
 using namespace std;
  
// Method 1
//  int main(){
//   vector<int>nums = {3, 0, 1};
//   int n = nums.size();
//   sort(nums.begin(), nums.end());

//   for(int i = 0; i < n; i++){
//     if(i != nums[i]){
//         cout<<i;
//         return i;
//     }
//   }
//   cout<<n<<endl;
// }

// Method 2
//   int n = nums.size();

//   for(int i = 0; i < n; i++){
//     bool flag = false;

//     for(int ele: nums){
//         if(ele == i){
//             flag = true;
//             break;
//         }
//     }
//     if(flag == false) return i;
//   }

// Method 3 -> Mathematical Approach
// int main(){
//     vector<int>nums = {3, 0, 1};
//     sort(nums.begin(), nums.end())
//     int arr_sum = 0, idx_sum = 0;

//     for(int i = 0; i  n; i++){
//         arr_sum += arr[i];
//         idx_sum += i;
//     }

//     cout<<arr_sum - idx_sum<<endl;
// }

// Method 3 -> Mathematical Approach 
// TC: 0(n) SC: 0(n)
int main(){
    vector<int>nums = {3, 0, 1};
    sort(nums.begin(), nums.end())
    vector<bool> flag(n+1, false);

    for(int i = 0; i < n; i++){
        flag[arr[i]] = true;
        // flag[3] = true
        // flag[0] = true
        // flag[1] = true
    }
    for(int i = 0; i <= n; i++){
        if(flag[i] == false) return i; //flag[2] == false
    }
    return n;
  
}