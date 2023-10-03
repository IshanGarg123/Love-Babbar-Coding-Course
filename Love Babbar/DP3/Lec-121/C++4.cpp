// LeetCode 1388
// Pizza With 3n Slices
// Space optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
int maxSizeSlices(vector<int> &slices)
{
    int n = slices.size();
    int k = n / 3;

    vector<int> prev(n + 2, 0);
    vector<int> curr(n + 2, 0);
    vector<int> next(n + 2, 0);

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            int temp1 = slices[i] + next[j - 1];
            int temp2 = 0 + curr[j];
            prev[j] = max(temp1, temp2);
        }
        next = curr;
        curr = prev;
    }

    vector<int> prev1(n + 2, 0);
    vector<int> curr1(n + 2, 0);
    vector<int> next1(n + 2, 0);

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            int temp1 = slices[i] + next1[j - 1];
            int temp2 = 0 + curr1[j];
            prev1[j] = max(temp1, temp2);
        }
        next1 = curr1;
        curr1 = prev1;
    }

    return max(prev[k], prev1[k]);
}

int main()
{
    cout << "Pizza With 3n Slices" << endl;
}