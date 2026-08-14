// LeetCode 56 - Merge Intervals
// Approach: Sort and merge overlapping ranges.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) { sort(intervals.begin(), intervals.end()); vector<vector<int>> ans; for (auto &it : intervals) { if (ans.empty() || it[0] > ans.back()[1]) ans.push_back(it); else ans.back()[1] = max(ans.back()[1], it[1]); } return ans; }
int main() { vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}}; auto ans = merge(intervals); for (auto &v : ans) cout << v[0] << ',' << v[1] << ' '; cout << "\n"; return 0; }

