// Coding Ninjas
// Maximum sum of non-adjacent elements
// BY Tabulation
// T.C. = O(N) S.C = O(N);

#include<iostream> 
using namespace std;
#include<vector>

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int> dp(n,-1);
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);

    for(int i=2;i<n;i++)
    {
        int incl = dp[i-2] + nums[i];
        int excl = dp[i-1];

        dp[i] = max(incl,excl);
    }

    return dp[n-1];
    
}

int main()
{
    cout << "Maximum sum of non-adjacent elements" << endl;
}
