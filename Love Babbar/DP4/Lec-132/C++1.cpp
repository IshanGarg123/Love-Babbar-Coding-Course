// Leetcode - 123
// Best Time to Buy and Sell Stock III
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(vector<int> &prices, int index, int buy, int limit)
{
    if (index == prices.size())
    {
        return 0;
    }
    if (limit == 0)
    {
        return 0;
    }
    int profit = 0;

    if (buy == 1)
    {
        int temp1 = -prices[index] + solve(prices, index + 1, 0, limit);
        int temp2 = 0 + solve(prices, index + 1, 1, limit);
        profit = max(temp1, temp2);
    }
    else if (buy == 0)
    {
        int temp3 = prices[index] + solve(prices, index + 1, 1, limit - 1);
        int temp4 = 0 + solve(prices, index + 1, 0, limit);
        profit = max(temp3, temp4);
    }
    return profit;
}

int maxProfit(vector<int> &prices)
{
    return solve(prices, 0, 1, 2);
}

int main()
{
    cout << "Best Time to Buy and Sell Stock III" << endl;
}