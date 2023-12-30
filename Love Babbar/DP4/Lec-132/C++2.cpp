// Leetcode - 123
// Best Time to Buy and Sell Stock III
// Recursion + memorization
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>
int solve(vector<int> &prices, int index, int buy, int limit, vector<vector<vector<int>>> &dp)
{
    if (index == prices.size())
    {
        return 0;
    }
    if (limit == 0)
    {
        return 0;
    }

    if (dp[index][buy][limit] != -1)
    {
        return dp[index][buy][limit];
    }
    int profit = 0;

    if (buy == 1)
    {
        int temp1 = -prices[index] + solve(prices, index + 1, 0, limit, dp);
        int temp2 = 0 + solve(prices, index + 1, 1, limit, dp);
        profit = max(temp1, temp2);
    }
    else if (buy == 0)
    {
        int temp3 = prices[index] + solve(prices, index + 1, 1, limit - 1, dp);
        int temp4 = 0 + solve(prices, index + 1, 0, limit, dp);
        profit = max(temp3, temp4);
    }
    dp[index][buy][limit] = profit;
    return profit;
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
    return solve(prices, 0, 1, 2, dp);
}

int main()
{
    cout << "Best Time to Buy and Sell Stock III" << endl;
}