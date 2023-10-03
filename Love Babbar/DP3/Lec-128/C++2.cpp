// Leetcode - 375
// Guess Number Higher or Lower II
// Recursion + memorization
// T.C. = O(N^3)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int s, int e, vector<vector<int>> &dp)
{
    if (s >= e)
    {
        return 0;
    }

    if (dp[s][e] != -1)
    {
        return dp[s][e];
    }

    int ans = INT_MAX;
    for (int i = s; i <= e; i++)
    {
        ans = min(ans, i + max(solve(s, i - 1, dp), solve(i + 1, e, dp)));
    }
    dp[s][e] = ans;
    return ans;
}

int getMoneyAmount(int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(1, n, dp);
}

int main()
{
    cout << "Guess Number Higher or Lower II" << endl;
}