// Leetcode - 1130
// Minimum Cost Tree From Leaf Values
// Recursion + memorization
// T.C. = O(N^3)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include<map>

int solve(vector<int> &arr, int start, int end, map<pair<int, int>, int> &maxi, vector<vector<int>> &dp)
{
    if (start == end)
    {
        return 0;
    }
    else if (start - end == 1)
    {
        return arr[start] * arr[end];
    }

    if (dp[start][end] != -1)
    {
        return dp[start][end];
    }

    int ans = INT_MAX;
    for (int i = start; i < end; i++)
    {
        ans = min(ans, maxi[{start, i}] * maxi[{i + 1, end}] + solve(arr, start, i, maxi, dp) + solve(arr, i + 1, end, maxi, dp));
    }
    dp[start][end] = ans;
    return ans;
}

int mctFromLeafValues(vector<int> &arr)
{
    int n = arr.size();
    map<pair<int, int>, int> maxi;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    for (int i = 0; i < n; i++)
    {
        maxi[{i, i}] = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            maxi[{i, j}] = max(maxi[{i, j - 1}], arr[j]);
        }
    }
    return solve(arr, 0, n - 1, maxi, dp);
}

int main()
{
    cout << "Minimum Cost Tree From Leaf Values" << endl;
}