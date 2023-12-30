// GeeksForGeeks
// Largest square formed in a matrix
// Recursion
// T.C. = O(3^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>

int solve(vector<vector<int>> &mat, int i, int j, int &maxi)
{
    if (i >= mat.size() || j >= mat[0].size())
    {
        return 0;
    }

    int right = solve(mat, i, j + 1, maxi);
    int down = solve(mat, i + 1, j, maxi);
    int diagonal = solve(mat, i + 1, j + 1, maxi);

    if (mat[i][j] == 1)
    {
        int ans = 1 + min(right, min(down, diagonal));
        maxi = max(ans, maxi);
        return ans;
    }
    else
    {
        return 0;
    }
}

int maxSquare(int n, int m, vector<vector<int>> mat)
{
    int maxi = 0;
    solve(mat, 0, 0, maxi);
    return maxi;
}

int main()
{
    cout << "Largest square formed in a matrix" << endl;
}