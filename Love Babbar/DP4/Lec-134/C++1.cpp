// Leetcode - 714
// Best Time to Buy and Sell Stock V
// Space Optimization
// T.C. = O(N)  S.C = O(1);
// Just Same as Best Time to Buy and Sell Stock II

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(vector<int> &prices, int fee)
{
    int n = prices.size();
    vector<int> next(2, 0);
    vector<int> curr(2, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            int profit = 0;
            if (j == 1)
            {
                int temp1 = -prices[i] + next[0];
                int temp2 = 0 + next[1];
                profit = max(temp1, temp2);
            }
            else
            {
                int temp1 = prices[i] - fee + next[1];
                int temp2 = 0 + next[0];
                profit = max(temp1, temp2);
            }
            curr[j] = profit;
        }
        next = curr;
    }
    return next[1];
}
int main()
{
    cout << "Best Time to Buy and Sell Stock V" << endl;
}