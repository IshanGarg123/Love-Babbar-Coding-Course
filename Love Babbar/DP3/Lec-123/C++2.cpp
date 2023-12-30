// GFG
// Partition Equal Subset Sum
// Recursion + memorization
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
int solve(int N, int arr[], int index, int target, vector<vector<int>> &dp)
{
    if (index >= N || target < 0)
    {
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }

    if (dp[index][target] != -1)
    {
        return dp[index][target];
    }

    int temp1 = solve(N, arr, index + 1, target - arr[index], dp);
    int temp2 = solve(N, arr, index + 1, target, dp);

    dp[index][target] = temp1 || temp2;

    return (temp1 || temp2);
}

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
    vector<vector<int>> dp(N + 1, vector<int>(target + 1, -1));

    return solve(N, arr, 0, target, dp);
}
int main()
{
    cout << "Partition Equal Subset Sum" << endl;
}