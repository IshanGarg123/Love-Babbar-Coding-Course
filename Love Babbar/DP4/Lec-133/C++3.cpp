// Leetcode - 188
// Best Time to Buy and Sell Stock IV
// Tabulation
// T.C. = O(N*k)  S.C = O(N*K);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2 * k + 1, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= 2 * k; j++)
        {
            int profit = 0;
            if (j % 2 == 0)
            {
                // buy karo
                int temp1 = -prices[i] + dp[i + 1][j - 1];
                int temp2 = 0 + dp[i + 1][j];
                profit = max(temp1, temp2);
            }
            else
            {
                // sell karo
                int temp3 = prices[i] + dp[i + 1][j - 1];
                int temp4 = 0 + dp[i + 1][j];
                profit = max(temp3, temp4);
            }
            dp[i][j] = profit;
        }
    }
    return dp[0][2 * k];
}

int main()
{
    cout << "Best Time to Buy and Sell Stock IV" << endl;
}