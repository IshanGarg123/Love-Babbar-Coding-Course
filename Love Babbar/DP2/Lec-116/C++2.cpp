// Leet Code 1039
// Minimum Score Triangulation of Polygon
// Recursion + memorization
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(vector<int> &values, int i, int j, vector<vector<int>> &dp)
{
    if (i + 1 == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        int temp = values[i] * values[j] * values[k] + solve(values, i, k, dp) + solve(values, k, j, dp);
        ans = min(ans, temp);
    }
    dp[i][j] = ans;
    return dp[i][j];
}

int minScoreTriangulation(vector<int> &values)
{
    int n = values.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return solve(values, 0, n - 1, dp);
}

int main()
{
    cout << "Minimum Score Triangulation of Polygon" << endl;
}