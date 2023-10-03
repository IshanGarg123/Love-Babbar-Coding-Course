// Leetcode - 123
// Best Time to Buy and Sell Stock III
// Space optimization
// T.C. = O(N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <map>

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> next(2, vector<int>(3, 0));
    vector<vector<int>> curr(2, vector<int>(3, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int k = 1; k <= 2; k++)
            {
                int profit = 0;
                if (j == 1)
                {
                    int temp1 = -prices[i] + next[0][k];
                    int temp2 = 0 + next[1][k];
                    profit = max(temp1, temp2);
                }
                else if (j == 0)
                {
                    int temp3 = prices[i] + next[1][k - 1];
                    int temp4 = 0 + next[0][k];
                    profit = max(temp3, temp4);
                }
                curr[j][k] = profit;
            }
        }
        next = curr;
    }
    return next[1][2];
}

int main()
{
    cout << "Best Time to Buy and Sell Stock III" << endl;
}