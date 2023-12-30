// Leetcode - 122
// Best Time to Buy and Sell Stock II
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
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            int profit;
            if (j == 1)
            {
                int temp1 = -prices[i] + dp[i + 1][0];
                int temp2 = 0 + dp[i + 1][1];
                profit = max(temp1, temp2);
            }
            else if (j == 0)
            {
                int temp3 = prices[i] + dp[i + 1][1];
                int temp4 = 0 + dp[i + 1][0];
                profit = max(temp3, temp4);
            }
            dp[i][j] = profit;
            cout << profit << endl;
        }
    }
    return dp[0][1];
}

int main()
{
    cout << "Best Time to Buy and Sell Stock II" << endl;
}