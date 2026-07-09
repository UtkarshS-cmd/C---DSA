// Container With Most Water
// Approach: Try every pair of lines and compute the area.
#include <bits/stdc++.h>
using namespace std;

int maxAreaBrute(const vector<int> &height)
{
    int best = 0;
    for (int i = 0; i < (int)height.size(); ++i)
    {
        for (int j = i + 1; j < (int)height.size(); ++j)
        {
            best = max(best, min(height[i], height[j]) * (j - i));
        }
    }
    return best;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxAreaBrute(height) << "\n";
    return 0;
}
