// Leetcode - 96
// Unique Binary Search Trees
// Tabulation
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int numTrees(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }
    return dp[n];
}

int main()
{
    cout << "Unique Binary Search Trees" << endl;
}