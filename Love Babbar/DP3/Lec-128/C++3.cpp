// Leetcode - 375
// Guess Number Higher or Lower II
// Tabulation
// T.C. = O(N^3)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int getMoneyAmount(int n)
{
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    for (int s = n; s >= 1; s--)
    {
        for (int e = s + 1; e <= n; e++)
        {
            int ans = INT_MAX;
            for (int i = s; i <= e; i++)
            {
                ans = min(ans, i + max(dp[s][i - 1], dp[i + 1][e]));
            }
            dp[s][e] = ans;
        }
    }
    return dp[1][n];
}

int main()
{
    cout << "Guess Number Higher or Lower II" << endl;
}