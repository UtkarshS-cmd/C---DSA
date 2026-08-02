#include<iostream>
using namespace std;


// int main(){
// int arr[] = {7,1,5,3,6,4};
// int n = 6;
// int bestBuy = arr[0], maxProfit = 0;

// for(int i = 1 ; i < n; i++){
//     if(arr[i] > bestBuy){
//         maxProfit = max(maxProfit, arr[i] - bestBuy);
//     }
//     bestBuy = min(bestBuy, arr[i]);
// }
//     cout<<maxProfit<<endl;
// return 0;
// }

// int main(){
//     int ht[] = {1,8,6,2,5,4,8,3,7};
//     int n = 9, w, area, maxht = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             w = j - i;
//             area = ht[i]*w;
//             maxht = max(maxht, area);
//         }
//     }
//     cout<<maxht<<endl;
// }

// int main(){
//     int ht[] = {1,8,6,2,5,4,8,3,7};
//     int n = 9, lp = 0, rp = n-1, currWater = 0, maxWater = 0;
//     while(lp < rp){
//         int w = rp - lp;
//         int ht = min(ht[lp], ht[rp]);
//         int currWater = w*ht;
//         int maxWater = max(maxWater, currWater);

//         ht[lp] < ht[rp] ? lp++ : rp--;
//     }
//     cout<<maxWater<<endl;
// }

// product of an array except it self
// !->Brute Force
// int main(){
//     int a[] = {1,2,3,4};
//     int n = 4;
//     int prod = 1;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i != j){
//                 prod *= a[j];
//             }
//             a[i] = prod;
//         }
//     }
// }

// 2->Optimized
// int main(){
//      int a[] = {1,2,3,4};
//      int n = 4;
//      int prefix[n], suffix[n];

//     //  prefix
//     prefix[0] = 1;
//     for(int i = 1; i < n; i++){
//         prefix[i] = prefix[i-1]*a[i-1];
//     }

//     // suffix
//     suffix[0] = 1;
//     for(int i = n - 2; i >= 0; i--){
//         suffix[i] = suffix[i+1]*a[i+1];
//     }

//     for(int i = 0; i < n; i++){
//         a[i] = prefix[i]*suffix[i];
//         cout<<a[i]<<" ";
//     }
// }

