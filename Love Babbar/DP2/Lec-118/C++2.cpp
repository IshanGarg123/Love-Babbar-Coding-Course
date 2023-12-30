// Leet Code 1402
// Reducing Dishes
// Recursion + memorization
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <algorithm>

int solve(vector<int> &satisfaction, int index, int time, vector<vector<int>> &dp)
{
    if (index == satisfaction.size())
    {
        return 0;
    }

    if (dp[index][time] != -1)
    {
        return dp[index][time];
    }

    int incl = satisfaction[index] * time + solve(satisfaction, index + 1, time + 1, dp);
    int excl = solve(satisfaction, index + 1, time, dp);

    dp[index][time] = max(incl, excl);
    return dp[index][time];
}

int maxSatisfaction(vector<int> &satisfaction)
{
    int n = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(satisfaction, 0, 1, dp);
}

int main()
{
    cout << "Reducing Dishes" << endl;
}