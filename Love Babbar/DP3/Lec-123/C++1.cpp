// GFG
// Partition Equal Subset Sum
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int N, int arr[], int index, int target)
{
    if (index >= N || target < 0)
    {
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }

    int temp1 = solve(N, arr, index + 1, target - arr[index]);
    int temp2 = solve(N, arr, index + 1, target);

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

    return solve(N, arr, 0, target);
}

int main()
{
    cout << "Partition Equal Subset Sum" << endl;
}