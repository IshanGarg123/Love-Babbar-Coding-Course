// Coding Ninjas
// Ninja's Trip
// Tabulation
// T.C. = O(N)  S.C = O(N);
// S.C = O(1) 
// as max size of dp array cant pass 365;

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    // Write your code here.
    vector<int> dp(n + 1, INT_MAX);
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int ans1 = dp[i + 1] + cost[0];

        int j = i;
        while (j < n && days[j] < days[i] + 7)
        {
            j++;
        }

        int ans2 = dp[j] + cost[1];

        int k = i;
        while (k < n && days[k] < days[i] + 30)
        {
            k++;
        }

        int ans3 = dp[k] + cost[2];

        dp[i] = min(ans1, min(ans2, ans3));
    }
    return dp[0];
}

int main()
{
    cout << "Ninja's Trip" << endl;
}