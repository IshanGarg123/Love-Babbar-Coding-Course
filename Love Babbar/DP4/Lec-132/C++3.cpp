// Leetcode - 123
// Best Time to Buy and Sell Stock III
// Tabulation
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int k = 1; k <= 2; k++)
            {
                int profit = 0;
                if (j == 1)
                {
                    int temp1 = -prices[i] + dp[i + 1][0][k];
                    int temp2 = 0 + dp[i + 1][1][k];
                    profit = max(temp1, temp2);
                }
                else if (j == 0)
                {
                    int temp3 = prices[i] + dp[i + 1][1][k - 1];
                    int temp4 = 0 + dp[i + 1][0][k];
                    profit = max(temp3, temp4);
                }
                dp[i][j][k] = profit;
            }
        }
    }
    return dp[0][1][2];
}

int main()
{
    cout << "Best Time to Buy and Sell Stock III" << endl;
}