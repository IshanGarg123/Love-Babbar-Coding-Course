// Leet Code 1824
// Minimum Sideway Jumps
// Recursion + memorization
// T.C. = O(N*4)  S.C = O(N*4);
// n is the length of the obstacles array

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(vector<int> &obstacles, int currlane, int pos, vector<vector<int>> &dp)
{
    if (pos == obstacles.size() - 1)
    {
        return 0;
    }

    if (dp[currlane][pos] != -1)
    {
        return dp[currlane][pos];
    }

    if (obstacles[pos + 1] != currlane)
    {
        dp[currlane][pos] = solve(obstacles, currlane, pos + 1, dp);
        return dp[currlane][pos];
    }
    else
    {
        int ans = INT_MAX;
        for (int i = 1; i <= 3; i++)
        {
            if (obstacles[pos] != i && currlane != i)
            {
                ans = min(ans, solve(obstacles, i, pos + 1, dp) + 1);
            }
        }
        dp[currlane][pos] = ans;
        return ans;
    }
}

int minSideJumps(vector<int> &obstacles)
{
    int n = obstacles.size();
    vector<vector<int>> dp(4, vector<int>(n, -1));
    return solve(obstacles, 2, 0, dp);
}

int main()
{
    cout << "Minimum Sideway Jumps" << endl;
}