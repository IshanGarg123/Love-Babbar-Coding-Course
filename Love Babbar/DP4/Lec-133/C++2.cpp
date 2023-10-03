// Leetcode - 188
// Best Time to Buy and Sell Stock IV
// Recursion + memorization
// T.C. = O(N*k)  S.C = O(N*k);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(vector<int> &prices, int index, int opr, vector<vector<int>> &dp)
{
    if (index == prices.size())
    {
        return 0;
    }

    if (opr == 0)
    {
        return 0;
    }

    if (dp[index][opr] != -1)
    {
        return dp[index][opr];
    }
    int profit = 0;

    if (opr % 2 == 0)
    {
        // buy karo
        int temp1 = -prices[index] + solve(prices, index + 1, opr - 1, dp);
        int temp2 = 0 + solve(prices, index + 1, opr, dp);
        profit = max(temp1, temp2);
    }
    else
    {
        // sell karo
        int temp3 = prices[index] + solve(prices, index + 1, opr - 1, dp);
        int temp4 = 0 + solve(prices, index + 1, opr, dp);
        profit = max(temp3, temp4);
    }
    dp[index][opr] = profit;
    return profit;
}

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2 * k + 1, -1));
    return solve(prices, 0, 2 * k, dp);
}

int main()
{
    cout << "Best Time to Buy and Sell Stock IV" << endl;
}