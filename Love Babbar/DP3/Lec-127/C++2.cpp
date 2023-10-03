// Leetcode - 96
// Unique Binary Search Trees
// Recursion + memorization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += solve(i - 1, dp) * solve(n - i, dp);
    }
    dp[n] = ans;
    return ans;
}

int numTrees(int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}

int main()
{
    cout << "Unique Binary Search Trees" << endl;
}