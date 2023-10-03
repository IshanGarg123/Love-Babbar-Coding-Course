// Leetcode - 188
// Best Time to Buy and Sell Stock IV
// Space Optimization
// T.C. = O(N*k)  S.C = O(k);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<int> next(2 * k + 1, 0);
    vector<int> curr(2 * k + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= 2 * k; j++)
        {
            int profit = 0;
            if (j % 2 == 0)
            {
                // buy karo
                int temp1 = -prices[i] + next[j - 1];
                int temp2 = 0 + next[j];
                profit = max(temp1, temp2);
            }
            else
            {
                // sell karo
                int temp3 = prices[i] + next[j - 1];
                int temp4 = 0 + next[j];
                profit = max(temp3, temp4);
            }
            curr[j] = profit;
        }
        next = curr;
    }
    return curr[2 * k];
}

int main()
{
    cout << "Best Time to Buy and Sell Stock IV" << endl;
}