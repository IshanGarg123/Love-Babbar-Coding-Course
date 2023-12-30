// Leetcode - 801
// Minimum Swaps To Make Sequences Increasing
// Space optimization
// T.C. = O(N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int minSwap(vector<int> &nums1, vector<int> &nums2)
{
    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);
    int n = nums1.size();

    int dp1 = 0;
    int dp2 = 0;
    int dp3 = 0;
    int dp4 = 0;

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
                ans = min(ans, dp3);
            }
            // swap
            if (nums1[i] > prev2 && nums2[i] > prev1)
            {
                ans = min(ans, 1 + dp4);
            }
            if (j == 0)
            {
                dp1 = ans;
            }
            else
            {
                dp2 = ans;
            }
        }
        dp3 = dp1;
        dp4 = dp2;
    }
    return dp1;
}
int main()
{
    cout << "Minimum Swaps To Make Sequences Increasing" << endl;
}