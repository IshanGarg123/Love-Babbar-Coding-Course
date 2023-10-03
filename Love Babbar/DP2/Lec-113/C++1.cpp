// Coding Ninjas
// Ninja's Trip
// Recursion
// T.C. = O(3^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(int n, vector<int> &days, vector<int> &cost, int index)
{
    if (index >= n)
    {
        return 0;
    }

    int ans1 = solve(n, days, cost, index + 1) + cost[0];

    int i = index;
    while (days[i] < (days[index] + 7) && i < n)
    {
        i++;
    }

    int ans2 = solve(n, days, cost, i) + cost[1];

    int j = index;
    while (days[j] < (days[index] + 30) && j < n)
    {
        j++;
    }

    int ans3 = solve(n, days, cost, j) + cost[2];

    int ans = min(ans1, min(ans2, ans3));
    return ans;
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    return solve(n, days, cost, 0);
}

int main()
{
    cout << "Ninja's Trip" << endl;
}