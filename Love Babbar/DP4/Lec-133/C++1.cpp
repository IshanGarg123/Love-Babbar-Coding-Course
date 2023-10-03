// Leetcode - 188
// Best Time to Buy and Sell Stock IV
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int solve(vector<int> &prices, int index, int opr)
{
    if (index == prices.size())
    {
        return 0;
    }

    if (opr == 0)
    {
        return 0;
    }
    int profit = 0;

    if (opr % 2 == 0)
    {
        // buy karo
        int temp1 = -prices[index] + solve(prices, index + 1, opr - 1);
        int temp2 = 0 + solve(prices, index + 1, opr);
        profit = max(temp1, temp2);
    }
    else
    {
        // sell karo
        int temp1 = prices[index] + solve(prices, index + 1, opr - 1);
        int temp2 = 0 + solve(prices, index + 1, opr);
        profit = max(temp1, temp2);
    }
    return profit;
}

int maxProfit(int k, vector<int> &prices)
{
    return solve(prices, 0, 2 * k);
}
int main()
{
    cout << "Best Time to Buy and Sell Stock IV" << endl;
}