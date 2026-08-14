// Permutation in String
// Approach: Use sliding window with frequency maps.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

bool checkInclusionBrute(const string &s1, const string &s2)
{
    string target = s1;
    sort(target.begin(), target.end());
    for (int i = 0; i + (int)s1.size() <= (int)s2.size(); ++i)
    {
        string sub = s2.substr(i, s1.size());
        sort(sub.begin(), sub.end());
        if (sub == target)
            return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << checkInclusionBrute("ab", "eidbaooo") << "\n";
    return 0;
}
