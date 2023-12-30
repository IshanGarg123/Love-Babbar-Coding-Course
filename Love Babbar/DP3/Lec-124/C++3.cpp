// Leetcode - 801
// Minimum Swaps To Make Sequences Increasing
// Tabulation
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
int minSwap(vector<int> &nums1, vector<int> &nums2)
{
    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);
    int n = nums1.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j >= 0; j--)
        {
            int prev1 = nums1[i - 1];
            int prev2 = nums2[i - 1];

            if (j == 1)
            {
                swap(prev1, prev2);
            }

            int ans = INT_MAX;

            // no swap
            if (nums1[i] > prev1 && nums2[i] > prev2)
            {
                ans = min(ans, dp[i + 1][0]);
            }
            // swap
            if (nums1[i] > prev2 && nums2[i] > prev1)
            {
                ans = min(ans, 1 + dp[i + 1][1]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[1][0];
}

int main()
{
    cout << "Minimum Swaps To Make Sequences Increasing" << endl;
}