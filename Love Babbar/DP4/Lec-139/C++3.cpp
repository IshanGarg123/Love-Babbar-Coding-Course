// Leetcode - 44
// Wildcard Matching
// Tabulation
// T.C. = O(N*M)  S.C = O(N*M)

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

bool isMatch(string s, string p)
{
    int len1 = s.length();
    int len2 = p.length();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

    dp[0][0] = true;

    for (int j = 1; j <= len2; j++)
    {
        bool flag = true;
        for (int k = 1; k <= j; k++)
        {
            if (p[k - 1] != '*')
            {
                flag = false;
                break;
            }
        }
        dp[0][j] = flag;
    }

    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            int ans;
            if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
            {
                ans = dp[i - 1][j - 1];
            }
            else if (p[j - 1] == '*')
            {
                ans = (dp[i - 1][j] || dp[i][j - 1]);
            }
            else
            {
                ans = false;
            }
            dp[i][j] = ans;
        }
    }
    return dp[len1][len2];
}

int main()
{
    cout << "Wildcard Matching" << endl;
}