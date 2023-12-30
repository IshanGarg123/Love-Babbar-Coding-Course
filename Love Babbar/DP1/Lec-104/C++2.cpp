// Coding Ninjas
// Minimum Elements
// BY Recursion + memorization
// T.C. = O(N^2)  S.C = O(N)

#include<iostream> 
using namespace std;
#include<vector>

/*
int solve(vector<int> &nums,int x,vector<int> &dp)
{
    if(x==0)
    {
        return 0;
    }
    if(x<0)
    {
        return INT_MAX;
    }

    if(dp[x] != -1)
    {
        return dp[x];
    }

    int mini = INT_MAX;

    for(int i=0;i<nums.size();i++)
    {
        int ans = solve(nums,x-nums[i],dp);
        if(ans!=INT_MAX && ans<mini)
        {
            mini = ans+1;
        }
    }
    dp[x] = mini;
    return mini;
}


int minimumElements(vector<int> &num, int x)
{
    vector<int> dp(x+1,-1);
    int ans = solve(num,x,dp);
    if(ans == INT_MAX)
    {
        return -1;
    }
    return ans;
}
*/

int main()
{
    cout << "Minimum Elements"  << endl;
}