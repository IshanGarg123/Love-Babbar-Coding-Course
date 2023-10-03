// Leetcode - 121
// Best Time to Buy and Sell Stock
// simple methord
// T.C. = O(N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int mini = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < mini)
        {
            mini = prices[i];
        }
        else
        {
            int temp = prices[i] - mini;
            if (temp > profit)
            {
                profit = temp;
            }
        }
    }
    return profit;
}

int main()
{
    cout << "Best Time to Buy and Sell Stock" << endl;
}