// Leetcode - 44
// Wildcard Matching
// Recursion + memorization
// T.C. = O(N*M)  S.C = O(N*M)

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

bool solve(string &s, string &p, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 && j < 0)
    {
        return true;
    }
    if (i >= 0 && j < 0)
    {
        return false;
    }
    if (i < 0 && j >= 0)
    {
        for (int k = 0; k <= j; k++)
        {
            if (p[k] != '*')
            {
                return false;
            }
        }
        return true;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans;

    if (s[i] == p[j] || p[j] == '?')
    {
        ans = solve(s, p, i - 1, j - 1, dp);
    }
    else if (p[j] == '*')
    {
        ans = (solve(s, p, i - 1, j, dp) || solve(s, p, i, j - 1, dp));
    }
    else
    {
        ans = false;
    }
    dp[i][j] = ans;
    return ans;
}

bool isMatch(string s, string p)
{
    int len1 = s.length();
    int len2 = p.length();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, -1));
    return solve(s, p, len1 - 1, len2 - 1, dp);
}

int main()
{
    cout << "Wildcard Matching" << endl;
}