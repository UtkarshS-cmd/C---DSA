// class Solution {
// public:
//     void merge(vector<int>& A, int m, vector<int>& B, int n) {
//         int idx = m+n-1, i = m-1, j = n-1;

//         while(i>=0 && j >=0){
//             if(A[i] >= B[j]){
//                 A[idx--] = A[i--];
//             }else{
//                 A[idx--] = B[j--];
//             }
//         }
//            while(j>=0){
//                    A[idx--] = B[j--];
//             }
//         }
// };

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        // Create a temporary copy of A's valid elements to prevent overwriting
        vector<int> A_copy(A.begin(), A.begin() + m);
        
        int idx = 0, i = 0, j = 0;
        
        // Compare elements from the 0th index of both arrays
        while (i < m && j < n) {
            if (A_copy[i] <= B[j]) {
                A[idx++] = A_copy[i++];
            } else {
                A[idx++] = B[j++];
            }
        }
        
        // Copy remaining elements from A_copy if any
        while (i < m) {
            A[idx++] = A_copy[i++];
        }
        
        // Copy remaining elements from B if any
        while (j < n) {
            A[idx++] = B[j++];
        }
    }
};