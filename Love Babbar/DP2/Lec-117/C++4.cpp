// Leet Code 1824
// Minimum Sideway Jumps
// Space Optimization
// T.C. = O(N*3)  S.C = O(1);
// n is the length of the obstacles array

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int minSideJumps(vector<int> &obstacles)
{
    int n = obstacles.size();
    vector<int> next(4, 0);
    vector<int> curr(4, INT_MAX);

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (obstacles[i + 1] != j)
            {
                curr[j] = next[j];
            }
            else
            {
                int ans = INT_MAX;
                for (int k = 1; k <= 3; k++)
                {
                    if (obstacles[i] != k && k != j)
                    {
                        ans = min(ans, next[k] + 1);
                    }
                }
                curr[j] = ans;
            }
        }
        next = curr;
    }

    return min(next[2], min(next[1] + 1, next[3] + 1));
}

int main()
{
    cout << "Minimum Sideway Jumps" << endl;
}