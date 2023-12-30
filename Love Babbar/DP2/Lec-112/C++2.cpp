// GFG
// Get Minimum Squares
// Recursion + memorization
// T.C. = O(N*sqrt(N))  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int ans = INT_MAX;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, solve(n - (i * i), dp));
    }
    dp[n] = ans + 1;
    return dp[n];
}

int MinSquares(int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}

int main()
{
    cout << "Get Minimum Squares" << endl;
}