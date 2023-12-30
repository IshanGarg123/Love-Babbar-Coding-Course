// Leetcode - 122
// Best Time to Buy and Sell Stock II
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
    int next = 0;
    int next1 = 0;
    int curr, curr1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 1; j++)
        {
            int profit;
            if (j == 1)
            {
                int temp1 = -prices[i] + next;
                int temp2 = 0 + next1;
                profit = max(temp1, temp2);
            }
            else if (j == 0)
            {
                int temp3 = prices[i] + next1;
                int temp4 = 0 + next;
                profit = max(temp3, temp4);
            }
            if (j == 0)
            {
                curr = profit;
            }
            else if (j == 1)
            {
                curr1 = profit;
            }
        }
        next = curr;
        next1 = curr1;
    }
    return next1;
}

int main()
{
    cout << "Best Time to Buy and Sell Stock II" << endl;
}