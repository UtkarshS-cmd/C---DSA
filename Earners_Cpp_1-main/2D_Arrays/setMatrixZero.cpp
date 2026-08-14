#include<iostream>
using namespace std;

// Not optimized 
// class Solution{

//     public:
//         void setZeroes(vector<vector<int>>& arr){
//             vector<vector<int>> copy = arr;
//             int m = arr.size(), n = arr[0].size();

//             for(int i = 0; i <m; i++){
//                 for(int j = 0; j< n; j++){
//                     if(copy[i][j] == 0){
//                         // set ith row to zero
//                         for(int col = 0; col < n; col++){
//                             arr[i][col] = 0;
//                         }
//                         // set jth col to 0
//                         for(int row = 0; row < m; row++){
//                             arr[i][col] = 0;
//                         }
//                     }
//                 }
//             }
//        }
//    }


class Solution{
    
    public:
        void setZeroes(vector<vector<int>>& arr){
            vector<bool> row(m, false);
            vector<bool> col(n, false);
            int m = arr.size(), n = arr[0].size();

            for(int i = 0; i <m; i++){
                for(int j = 0; j< n; j++){
                    if(arr[i][j] == 0){
                        row[i] = true;
                        col[j] = false;
                    }
                }
            }

            for(int i = 0; i < row.size(); i++){
                if(row[i] == true){
                    for(int j = 0; j < n; j++){ //set ith code to zero
                        arr[i][j] = 0;
                    }
                }
            }

            for(int i = 0; i < col.size(); i++){
                if(col[i] == true){ 
                    for(int j = 0; j < n; j++){ //set jth column to zero
                        arr[i][j] = 0;
                    }
                }
            }
       }
   }


int main(){
 
return 0;
}

