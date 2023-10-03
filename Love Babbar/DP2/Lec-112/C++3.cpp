// GFG
// Get Minimum Squares
// Tabulation
// T.C. = O(N*sqrt(N))  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int MinSquares(int n)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - (j * j)] + 1);
        }
    }
    return dp[n];
}

int main()
{
    cout << "Get Minimum Squares" << endl;
}