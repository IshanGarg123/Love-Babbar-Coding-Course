// GeeksForGeeks
// Largest square formed in a matrix
// Tabulation
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <vector>

int maxSquare(int n, int m, vector<vector<int>> mat)
{
    int maxi = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = mat[i][0];
        maxi = max(maxi, dp[i][0]);
    }

    for (int j = 0; j < m; j++)
    {
        dp[0][j] = mat[0][j];
        maxi = max(maxi, dp[0][j]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j]));
                maxi = max(dp[i][j], maxi);
            }
        }
    }
    return maxi;
}

int main()
{
    cout << "Largest square formed in a matrix" << endl;
}