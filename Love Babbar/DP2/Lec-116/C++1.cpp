// Leet Code 1039
// Minimum Score Triangulation of Polygon
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include<limits.h>
#include <vector>

int solve(vector<int> &values, int i, int j)
{
    int ans = INT_MAX;
    if (i + 1 == j)
    {
        return 0;
    }

    for (int k = i + 1; k < j; k++)
    {
        int temp = values[i] * values[j] * values[k] + solve(values, i, k) + solve(values, k, j);
        ans = min(ans, temp);
    }
    return ans;
}

int minScoreTriangulation(vector<int> &values)
{
    int n = values.size();
    return solve(values, 0, n - 1);
}

int main()
{
    cout << "Minimum Score Triangulation of Polygon" << endl;
}