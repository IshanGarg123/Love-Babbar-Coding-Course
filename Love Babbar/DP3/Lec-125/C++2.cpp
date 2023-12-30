// GFG
// Longest Arithmetic Progression
// Tabulation
// T.C. = O(N^2)  S.C = O(N^2);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
#include<map>

int lengthOfLongestAP(int A[], int n)
{
    if (n <= 2)
    {
        return n;
    }

    map<int, int> dp[n + 1];

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            int diff = A[i] - A[j];
            int cnt = 1;

            // the count function return only 1 or 0;
            if (dp[j].count(diff))
            {
                cnt = dp[j][diff];
            }

            dp[i][diff] = 1 + cnt;
            ans = max(dp[i][diff], ans);
        }
    }
    return ans;
}

int main()
{
    cout << "Longest Arithmetic Progression" << endl;
}