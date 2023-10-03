// Leetcode - 1143
// Longest Common Subsequence
// recursion + memorization
// T.C. = O(N*M)  S.C = O(N*M);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(string &text1, string &text2, int i, int j, vector<vector<int>> &dp)
{
    if (i == text1.length() || j == text2.length())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = 0;

    if (text1[i] == text2[j])
    {
        ans = 1 + solve(text1, text2, i + 1, j + 1, dp);
    }
    else
    {
        ans = max(solve(text1, text2, i + 1, j, dp), solve(text1, text2, i, j + 1, dp));
    }
    dp[i][j] = ans;
    return ans;
}

int longestCommonSubsequence(string text1, string text2)
{
    int n = text1.length();
    int m = text2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(text1, text2, 0, 0, dp);
}

int main()
{
    cout << "Longest Common Subsequence" << endl;
}