// LeetCode 746
// Min Cost Climbing Stairs
// using Recursion
// T.C. = O(2^n);

#include <iostream>
using namespace std;
#include <vector>

int solve(vector<int> &cost, int n)
{
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }
    return min(solve(cost, n - 1), solve(cost, n - 2)) + cost[n];
}

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int ans = min(solve(cost, n - 1), solve(cost, n - 2));
    return ans;
}

int main()
{
    cout << "Min Cost Climbing Stairs" << endl;
    return 0;
}