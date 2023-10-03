// Coding Ninjas
// Ninja's Trip
// Recursion + memorization
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp)
{
    if (index >= n)
    {
        return 0;
    }

    if (dp[index] != -1)
    {
        return dp[index];
    }

    int ans1 = solve(n, days, cost, index + 1, dp) + cost[0];

    int i = index;
    while (i < n && days[i] < days[index] + 7)
    {
        i++;
    }

    int ans2 = solve(n, days, cost, i, dp) + cost[1];

    int j = index;
    while (j < n && days[j] < days[index] + 30)
    {
        j++;
    }

    int ans3 = solve(n, days, cost, j, dp) + cost[2];

    dp[index] = min(ans1, min(ans2, ans3));
    return dp[index];
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    vector<int> dp(n + 1, -1);
    return solve(n, days, cost, 0, dp);
}

int main()
{
    cout << "Ninja's Trip" << endl;
}