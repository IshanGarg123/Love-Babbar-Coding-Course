// Leetcode - 1143
// Longest Common Subsequence
// Space Optimization
// T.C. = O(N*M)  S.C = O(M);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int longestCommonSubsequence(string text1, string text2)
{
    int n = text1.length();
    int m = text2.length();
    vector<int> next(m + 1, 0);
    vector<int> curr(m + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int ans = 0;
            if (text1[i] == text2[j])
            {
                ans = 1 + next[j + 1];
            }
            else
            {
                ans = max(next[j], curr[j + 1]);
            }
            curr[j] = ans;
        }
        next = curr;
    }
    return next[0];
}

int main()
{
    cout << "Longest Common Subsequence" << endl;
}