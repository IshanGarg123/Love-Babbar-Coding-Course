// Leetcode - 801
// Minimum Swaps To Make Sequences Increasing
// Recursion + momorization
// T.C. = O(N)  S.C = O(N);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(vector<int> &nums1, vector<int> &nums2, int index, int swapped, vector<vector<int>> &dp)
{
    if (index == nums1.size())
    {
        return 0;
    }
    int prev1 = nums1[index - 1];
    int prev2 = nums2[index - 1];

    if (swapped)
    {
        swap(prev1, prev2);
    }

    if (dp[index][swapped] != -1)
    {
        return dp[index][swapped];
    }

    int ans = INT_MAX;

    // no swap
    if (nums1[index] > prev1 && nums2[index] > prev2)
    {
        ans = min(ans, solve(nums1, nums2, index + 1, 0, dp));
    }
    // swap
    if (nums1[index] > prev2 && nums2[index] > prev1)
    {
        ans = min(ans, solve(nums1, nums2, index + 1, 1, dp) + 1);
    }
    dp[index][swapped] = ans;
    return ans;
}

int minSwap(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));

    return solve(nums1, nums2, 1, 0, dp);
}

int main()
{
    cout << "Minimum Swaps To Make Sequences Increasing" << endl;
}