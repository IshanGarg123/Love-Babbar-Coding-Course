// Leet Code 300
// Longest Increasing Subseq
// space optimization
// T.C. = O(N^2)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    vector<int> dp(n, 1);

    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (nums[j] < nums[i] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
                if (dp[i] > ans)
                {
                    ans = dp[i];
                }
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Longest Increasing Subsequence" << endl;
}