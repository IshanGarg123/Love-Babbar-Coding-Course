// LeetCode 1388
// Pizza With 3n Slices
// Recursion + Memorization
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int start, int endIndex, vector<int> &slices, int n, vector<vector<int>> &dp)
{
    if (n == 0 || start > endIndex)
    {
        return 0;
    }

    if (dp[start][n] != -1)
    {
        return dp[start][n];
    }

    int take = slices[start] + solve(start + 2, endIndex, slices, n - 1, dp);
    int noTake = solve(start + 1, endIndex, slices, n, dp);
    dp[start][n] = max(take, noTake);
    return dp[start][n];
}

int maxSizeSlices(vector<int> &slices)
{
    int n = slices.size();
    vector<vector<int>> dp1(n, vector<int>(n, -1));
    int case1 = solve(0, n - 2, slices, n / 3, dp1);
    vector<vector<int>> dp2(n, vector<int>(n, -1));
    int case2 = solve(1, n - 1, slices, n / 3, dp2);
    return max(case1, case2);
}

int main()
{
    cout << "Pizza With 3n Slices" << endl;
}