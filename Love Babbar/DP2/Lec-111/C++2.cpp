// Coding Ninjas
// Combination Sum IV
// Recursion + memorization
// T.C. = O(N^2) S.C = O(N)+O(N);
// N = target; 

#include<iostream>
using namespace std;
#include<vector>

int solve(vector<int> &num, int tar,vector<int> &dp)
{
    if(tar == 0)   
    {
        return 1;
    }
    else if(tar < 0)
    {
        return 0;
    }

    if(dp[tar]!= -1)
    {
        return dp[tar];
    }

    int ans = 0;
    for(int i=0;i<num.size();i++)
    {
        ans += solve(num,tar-num[i],dp);
    }
    dp[tar] = ans;
    return ans;
}


int findWays(vector<int> &num, int tar)
{
    vector<int> dp(tar+1,-1);
    solve(num,tar,dp);
    return dp[tar];
}

int main()
{
    cout << "Combination Sum IV" << endl;
}