// GFG
// Dice throw
// Space Optimization
// T.C. = O(M*X)  S.C = O(X);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

long long noOfWays(int M, int N, int X)
{
    // code here
    // vector<vector<long long>> dp(N+1,vector<long long>(X+1,0));
    vector<long long> prev(X + 1, 0);
    vector<long long> curr(X + 1, 0);

    prev[0] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= X; j++)
        {
            long long ans = 0;
            for (int k = 1; k <= M; k++)
            {
                if (j - k >= 0)
                {
                    ans += prev[j - k];
                }
            }
            curr[j] = ans;
        }
        prev = curr;
    }
    return curr[X];
}

int main()
{
    cout << "Dice throw" << endl;
}