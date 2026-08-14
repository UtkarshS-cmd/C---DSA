class Solution {
public:
vector<vector<int>> generate(int numRows) {

  vector<vector<int>> ans(numrows); //Empty vector 

  for(int i  = 1; i <= numRows; i++){
    ans.push_back(vector<int>(i,1));
  }

  //Fill the pascals triangle
  for(int i  = 0; i < ans.size(); i++){
    for(int j = 0; j < ans[i].size(); j++){

    if(j!=0 && j!=i) {
        ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
    }

   }

  }
  return ans;
}
};

        //   1
        // 1   1
    //   1   2   1
    // 1   3   3   1
//   1   4   6   4   1

// 🔥 Dry Run — numRows = 5
// Step 1: Create ans
// vector<vector<int>> ans(numRows);
// Since:
// numRows = 5
// we get:
// ans = [
//     [],
//     [],
//     [],
//     [],
//     []
// ]
// There are 5 empty rows.

// Step 2: Create each row
// Loop:
// for(int i = 1; i <= numRows; i++)
// We want row sizes:
// 1
// 2
// 3
// 4
// 5

// because Pascal's Triangle's first row has 1 element, second has 2, etc.

// i = 1
// ans[0] = vector<int>(1, 1);

// Means:
// Create a vector of size 1, with every element equal to 1.
// So:

// ans = [
//     [1],
//     [],
//     [],
//     [],
//     []
// ]
// i = 2
// ans[1] = vector<int>(2, 1);
// ans = [
//     [1],
//     [1, 1],
//     [],
//     [],
//     []
// ]
// i = 3
// ans = [
//     [1],
//     [1, 1],
//     [1, 1, 1],
//     [],
//     []
// ]
// i = 4
// ans = [
//     [1],
//     [1, 1],
//     [1, 1, 1],
//     [1, 1, 1, 1],
//     []
// ]
// i = 5
// ans = [
//     [1],
//     [1, 1],
//     [1, 1, 1],
//     [1, 1, 1, 1],
//     [1, 1, 1, 1, 1]
// ]

// At this point, we've only created the structure.
// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1

// Now we need to calculate the middle elements.

// Step 3: Fill the Pascal Triangle
// We have:
// for(int i = 0; i < ans.size(); i++)
// i represents the row index.
// And:
// for(int j = 0; j < ans[i].size(); j++)

// j represents the column index.

// Row 0
// i = 0

// ans[0] = [1]
// j = 0

// Check:

// if(j != 0 && j != i)

// Here:

// j = 0
// i = 0

// So:

// j != 0 → false

// Therefore if doesn't execute.

// Why?

// Because the first element of every row is always 1.

// Row 1
// i = 1

// ans[1] = [1, 1]
// j = 0

// Again:

// j != 0 → false

// Skip.

// First element stays:

// 1
// j = 1

// Now:

// j = i

// because:

// 1 = 1

// So condition fails.

// This is the last element, which should also remain 1.

// Therefore:

// [1, 1]
// 🔥 Row 2

// Now:

// i = 2

// ans[2] = [1, 1, 1]
// j = 0

// First element → skip.

// [1, 1, 1]
// j = 1

// Now:

// j != 0       → true
// j != i       → 1 != 2 → true

// So if executes:

// ans[2][1] = ans[1][0] + ans[1][1];

// Look at previous row:

//         [1, 1]
//          ↑  ↑
//        [0] [1]

// Therefore:

// ans[2][1] = 1 + 1
//           = 2

// Our row becomes:

// [1, 2, 1]
// j = 2

// Here:

// j == i

// So skip.

// Final:

// [1, 2, 1]
// 🔥 Row 3

// Initially:

// ans[3] = [1, 1, 1, 1]
// j = 0

// Skip because first element.

// [1, 1, 1, 1]
// j = 1

// Calculate:

// ans[3][1] = ans[2][0] + ans[2][1];

// Previous row:

// [1, 2, 1]
//  ↑  ↑

// So:

// 1 + 2 = 3

// Row:

// [1, 3, 1, 1]
// j = 2

// Calculate:

// ans[3][2] = ans[2][1] + ans[2][2];
// = 2 + 1
// = 3

// Row:

// [1, 3, 3, 1]
// j = 3

// Last element → skip.

// Final row:

// [1, 3, 3, 1]
// 🔥 Row 4

// Initially:

// [1, 1, 1, 1, 1]
// j = 1
// ans[4][1] = ans[3][0] + ans[3][1];
// = 1 + 3
// = 4
// [1, 4, 1, 1, 1]
// j = 2
// ans[4][2] = ans[3][1] + ans[3][2];
// = 3 + 3
// = 6
// [1, 4, 6, 1, 1]
// j = 3
// ans[4][3] = ans[3][2] + ans[3][3];
// = 3 + 1
// = 4
// [1, 4, 6, 4, 1]
// j = 4

// Last element → skip.

// 🎯 Final ans
// [
//     [1],
//     [1, 1],
//     [1, 2, 1],
//     [1, 3, 3, 1],
//     [1, 4, 6, 4, 1]
// ]

// Which visually gives:

//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1 4 6 4 1
// 🧩 The most important line

// Understand this line deeply:

// ans[i][j] = ans[i-1][j-1] + ans[i-1][j];

// Suppose we're calculating:

//        1   3   3   1
//            ↘   ↙
//              6

// For 6:

// i = 4
// j = 2

// Therefore:

// ans[4][2]
// =
// ans[3][1] + ans[3][2]

// which is:

// 3 + 3 = 6

// So i-1 means previous row, while:

// j-1 → element to the left in previous row
// j → element to the right in previous row
// Previous row:

//        1   3   3   1
//            ↘   ↙
//              6
             
// Current row:
//        1   4   6   4   1
// ⚠️ One thing to remember for your DSA notes

// Your original:

// vector<vector<int>> ans(numRows);

// for(int i = 1; i <= numRows; i++){
//     ans.push_back(vector<int>(i,1));
// }

// is logically wrong because ans(numRows) already contains numRows rows.

// If you want to use push_back(), then do:

// vector<vector<int>> ans;

// for(int i = 1; i <= numRows; i++){
//     ans.push_back(vector<int>(i, 1));
// }

// OR use pre-sized ans:

// vector<vector<int>> ans(numRows);

// for(int i = 1; i <= numRows; i++){
//     ans[i-1] = vector<int>(i, 1);
// }

// For learning, I'd recommend understanding the second version, because it makes the relationship between row index i and row size i+1 very clear.
