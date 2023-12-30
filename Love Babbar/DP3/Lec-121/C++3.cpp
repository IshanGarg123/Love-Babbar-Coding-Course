// LeetCode 1388
// Pizza With 3n Slices
// Tabulation
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int maxSizeSlices(vector<int> &slices)
{
    int n = slices.size();
    int k = n / 3;
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            int temp1 = slices[i] + dp[i + 2][j - 1];
            int temp2 = 0 + dp[i + 1][j];
            dp[i][j] = max(temp1, temp2);
        }
    }

    vector<vector<int>> dp1(n + 2, vector<int>(n + 2, 0));
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            int temp1 = slices[i] + dp1[i + 2][j - 1];
            int temp2 = 0 + dp1[i + 1][j];
            dp1[i][j] = max(temp1, temp2);
        }
    }

    return max(dp[1][k], dp1[0][k]);
}

int main()
{
    cout << "Pizza With 3n Slices" << endl;
}