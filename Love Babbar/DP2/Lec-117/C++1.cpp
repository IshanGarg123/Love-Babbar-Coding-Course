// Leet Code 1824
// Minimum Sideway Jumps
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(vector<int> &obstacles, int currlane, int pos)
{
    int n = obstacles.size() - 1;
    if (pos == n)
    {
        return 0;
    }

    if (obstacles[pos + 1] != currlane)
    {
        return solve(obstacles, currlane, pos + 1);
    }
    else
    {
        int ans = INT_MAX;
        for (int i = 1; i <= 3; i++)
        {
            if (obstacles[pos] != i && i != currlane)
            {
                ans = min(ans, solve(obstacles, i, pos + 1) + 1);
            }
        }
        return ans;
    }
}

int minSideJumps(vector<int> &obstacles)
{
    return solve(obstacles, 2, 0);
}

int main()
{
    cout << "Minimum Sideway Jumps" << endl;
}