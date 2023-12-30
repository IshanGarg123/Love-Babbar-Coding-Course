// GFG
// Dice throw
// Recursion + memorization
// T.C. = O(M*X)  S.C = O(M*X);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

long long solve(int M, int N, int X, vector<vector<long long>> &dp)
{
    if (X < 0)
    {
        return 0;
    }
    if (N != 0 && X == 0)
    {
        return 0;
    }
    if (X != 0 && N == 0)
    {
        return 0;
    }
    if (X == 0 && N == 0)
    {
        return 1;
    }

    if (dp[N][X] != -1)
    {
        return dp[N][X];
    }

    long long ans = 0;

    for (int i = 1; i <= M; i++)
    {
        ans += solve(M, N - 1, X - i, dp);
    }
    dp[N][X] = ans;
    return ans;
}

long long noOfWays(int M, int N, int X)
{
    // code here
    vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, -1));
    return solve(M, N, X, dp);
}

int main()
{
    cout << "Dice throw" << endl;
}