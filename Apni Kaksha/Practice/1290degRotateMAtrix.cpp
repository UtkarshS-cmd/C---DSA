class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // Transpose
                swap(matrix[i][j], matrix[j][i]);
            }
                
            //     // reverse each row
            //     for(int i=0; i < n;i++){
            //         reverse(arr[i].begin(), arr[i].end())
            //     }
            // }

            // reverse each row
                for(int i=0; i < n;i++){
                   int s = 0, e = n - 1;
                   while(s < e){
                    int temp = matrix[i][s];
                    matrix[i][s] = matrix[i][e];
                    matrix[i][e] = temp;
                    s++;
                    e--;
            }
        }
    }
}
};