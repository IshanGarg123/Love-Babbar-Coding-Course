// Leet Code 1402
// Reducing Dishes
// Tabulation
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include <algorithm>

int maxSatisfaction(vector<int> &satisfaction)
{
    sort(satisfaction.begin(), satisfaction.end());

    int n = satisfaction.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            int incl = satisfaction[i] * (j + 1) + dp[i + 1][j + 1];
            int excl = dp[i + 1][j];

            dp[i][j] = max(incl, excl);
        }
    }
    return dp[0][0];
}

int main()
{
    cout << "Reducing Dishes" << endl;
}