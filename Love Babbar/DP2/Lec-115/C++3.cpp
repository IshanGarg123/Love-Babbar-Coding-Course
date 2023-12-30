// GeeksForGeeks
// Largest square formed in a matrix
// Space Optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <vector>

int maxSquare(int n, int m, vector<vector<int>> mat)
{
    int maxi = 0;
    vector<int> prev(m + 1, 0);
    vector<int> curr(m + 1, 0);

    for (int i = 0; i < m; i++)
    {
        prev[i] = mat[0][i];
        maxi = max(maxi, prev[i]);
    }

    for (int i = 1; i < n; i++)
    {
        curr[0] = mat[i][0];
        maxi = max(curr[0], maxi);
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                curr[j] = 1 + min(prev[j - 1], min(curr[j - 1], prev[j]));
                maxi = max(curr[j], maxi);
            }
            else
            {
                curr[j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            prev[i] = curr[i];
        }
        curr.clear();
    }
    return maxi;
}

int main()
{
    cout << "Largest square formed in a matrix" << endl;
}