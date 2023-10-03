// Leetcode - 801
// Minimum Swaps To Make Sequences Increasing
// Recursion
// T.C. = O(2^N)  S.C = O(1);

#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>

int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped)
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

    int ans = INT_MAX;

    // no swap
    if (nums1[index] > prev1 && nums2[index] > prev2)
    {
        ans = min(ans, solve(nums1, nums2, index + 1, 0));
    }
    // swap
    if (nums1[index] > prev2 && nums2[index] > prev1)
    {
        ans = min(ans, solve(nums1, nums2, index + 1, 1) + 1);
    }
    return ans;
}

int minSwap(vector<int> &nums1, vector<int> &nums2)
{
    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);

    return solve(nums1, nums2, 1, 0);
}

int main()
{
    cout << "Minimum Swaps To Make Sequences Increasing" << endl;
}