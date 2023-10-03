// GFG
// Partition Equal Subset Sum
// Tabulation
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int equalPartition(int N, int arr[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    if (sum % 2 == 1)
    {
        return 0;
    }

    int target = sum / 2;
    vector<vector<int>> dp(N + 1, vector<int>(target + 1, 0));
    for (int i = 0; i <= N; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j <= target; j++)
        {
            int temp1 = 0;
            if (j - arr[i] >= 0)
            {
                temp1 = dp[i + 1][j - arr[i]];
            }
            int temp2 = dp[i + 1][j];

            dp[i][j] = (temp1 || temp2);
        }
    }
    return dp[0][target];
}

int main()
{
    cout << "Partition Equal Subset Sum" << endl;
}