// Leetcode - 122
// Best Time to Buy and Sell Stock II
// Recursion + memorization
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(vector<int> &prices, int index, int buy, vector<vector<int>> &dp)
{
    if (index == prices.size())
    {
        return 0;
    }

    if (dp[index][buy] != -1)
    {
        return dp[index][buy];
    }

    int profit;
    if (buy == 1)
    {
        int temp1 = -prices[index] + solve(prices, index + 1, 0, dp);
        int temp2 = 0 + solve(prices, index + 1, 1, dp);
        profit = max(temp1, temp2);
    }
    else if (buy == 0)
    {
        int temp3 = prices[index] + solve(prices, index + 1, 1, dp);
        int temp4 = 0 + solve(prices, index + 1, 0, dp);
        profit = max(temp3, temp4);
    }
    dp[index][buy] = profit;
    return profit;
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    return solve(prices, 0, 1, dp);
}
int main()
{
    cout << "Best Time to Buy and Sell Stock II" << endl;
}