class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        int m = A.size();
        int n = A[0].size();      // A columns = B rows
        int p = B[0].size();

        vector<vector<int>> result(m, vector<int>(p, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < n; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        return result;
    }
};
// A = [ 1  2 ]      B = [ 5  6 ]
//     [ 3  4 ]          [ 7  8 ]
// m = 2
// n = 2
// p = 2
// m × p = 2 × 2 ✅ -> result of matrix

// Initially:
// result = [ 0  0 ]
//          [ 0  0 ]

// i = 0, j = 0:
// We calculate result[0][0] using row 0 of A and column 0 of B.
// k = 0 → result[0][0] += A[0][0] * B[0][0]
//                         = 1 * 5 = 5
// k = 1 → result[0][0] += A[0][1] * B[1][0]
//                         = 2 * 7 = 14
// Therefore result[0][0] = 5 + 14 = 19

// i = 0, j = 1:
// We calculate result[0][1] using row 0 of A and column 1 of B.
// k = 0 → result[0][1] += 1 * 6 = 6
// k = 1 → result[0][1] += 2 * 8 = 16
// Therefore result[0][1] = 6 + 16 = 22

// i = 1, j = 0:
// We calculate result[1][0] using row 1 of A and column 0 of B.
// k = 0 → result[1][0] += 3 * 5 = 15
// k = 1 → result[1][0] += 4 * 7 = 28
// Therefore result[1][0] = 15 + 28 = 43

// i = 1, j = 1:
// We calculate result[1][1] using row 1 of A and column 1 of B.
// k = 0 → result[1][1] += 3 * 6 = 18
// k = 1 → result[1][1] += 4 * 8 = 32
// Therefore result[1][1] = 18 + 32 = 50

// Final result:
// result = [ 19  22 ]
//          [ 43  50 ]