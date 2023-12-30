// Leetcode - 72
// Edit Distance
// Tabulation
// T.C. = O(N*M)  S.C = O(N*M);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int minDistance(string word1, string word2)
{
    int n = word1.length();
    int m = word2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // return solve(word1,word2,0,0,dp);

    for (int i = 0; i <= n; i++)
    {
        dp[i][m] = n - i;
    }

    for (int j = 0; j <= m; j++)
    {
        dp[n][j] = m - j;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {

            int ans = 0;
            if (word1[i] == word2[j])
            {
                ans = dp[i + 1][j + 1];
            }
            else
            {
                int insertkaro = 1 + dp[i][j + 1];
                int deletekaro = 1 + dp[i + 1][j];
                int replacekaro = 1 + dp[i + 1][j + 1];

                ans = min(insertkaro, min(deletekaro, replacekaro));
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][0];
}

int main()
{
    cout << "Edit Distance" << endl;
}