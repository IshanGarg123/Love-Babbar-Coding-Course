// LeetCode 746
// Min Cost Climbing Stairs
// using space optimization
// T.C. = O(N); S.C = O(1);

#include <iostream>
using namespace std;
#include <vector>

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int a = cost[0];
    int b = cost[1];
    int c;

    for (int i = 2; i < n; i++)
    {
        c = min(a, b) + cost[i];
        a = b;
        b = c;
    }
    return min(a, b);
}

int main()
{
    cout << "Min Cost Climbing Stairs" << endl;
    return 0;
}