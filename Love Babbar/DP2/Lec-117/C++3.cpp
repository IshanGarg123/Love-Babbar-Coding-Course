// Leet Code 1824
// Minimum Sideway Jumps
// Tabulation
// T.C. = O(N*3)  S.C = O(N*4);
// n is the length of the obstacles array

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int minSideJumps(vector<int> &obstacles)
{
    int n = obstacles.size();
    vector<vector<int>> dp(n, vector<int>(4, INT_MAX));
    dp[n - 1][0] = 0;
    dp[n - 1][1] = 0;
    dp[n - 1][2] = 0;
    dp[n - 1][3] = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (obstacles[i + 1] != j)
            {
                dp[i][j] = dp[i + 1][j];
            }
            else
            {
                int ans = INT_MAX;
                for (int k = 1; k <= 3; k++)
                {
                    if (obstacles[i] != k && k != j)
                    {
                        ans = min(ans, dp[i + 1][k] + 1);
                    }
                }
                dp[i][j] = ans;
            }
        }
    }

    return min(dp[0][2], min(dp[0][2] + 1, dp[0][3] + 1));
}


int main()
{
    cout << "Minimum Sideway Jumps" << endl;
}