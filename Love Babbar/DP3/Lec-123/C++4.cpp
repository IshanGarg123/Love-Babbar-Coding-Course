// GFG
// Partition Equal Subset Sum
// Space Optimizations
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int equalPartition(int N, int arr[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    if (sum % 2 == 1)
    {
        return 0;
    }

    int target = sum / 2;
    vector<int> curr(target + 1, 0);
    vector<int> next(target + 1, 0);
    next[0] = 1;

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j <= target; j++)
        {
            int temp1 = 0;
            if (j - arr[i] >= 0)
            {
                temp1 = next[j - arr[i]];
            }
            int temp2 = next[j];

            curr[j] = (temp1 || temp2);
        }
        next = curr;
    }
    return curr[target];
}

int main()
{
    cout << "Partition Equal Subset Sum" << endl;
}