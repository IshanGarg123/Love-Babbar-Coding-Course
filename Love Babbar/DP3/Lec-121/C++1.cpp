// LeetCode 1388
// Pizza With 3n Slices
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int start, int endIndex, vector<int> &slices, int n)
{
    if (n == 0 || start > endIndex)
    {
        return 0;
    }

    int take = slices[start] + solve(start + 2, endIndex, slices, n - 1);
    int noTake = solve(start + 1, endIndex, slices, n);
    return max(take, noTake);
}

int maxSizeSlices(vector<int> &slices)
{
    int n = slices.size();
    int case1 = solve(0, n - 2, slices, n / 3);
    int case2 = solve(1, n - 1, slices, n / 3);
    return max(case1, case2);
}

int main()
{
    cout << "Pizza With 3n Slices" << endl;
}