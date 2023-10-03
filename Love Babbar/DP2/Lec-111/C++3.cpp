// Coding Ninjas
// Combination Sum IV
// Tabulation
// T.C. = O(N) S.C = O(N);
// N = target; 

#include<iostream>
using namespace std;
#include<vector>

#include <bits/stdc++.h> 
int findWays(vector<int> &num, int tar)
{
    vector<int> dp(tar+1,0);
    dp[0] = 1;
    
    for(int i=1;i<=tar;i++)
    {
        int ans = 0;
        for(int j=0;j<num.size();j++)
        {
            if(i>=num[j])
            {
                ans+=dp[i-num[j]];
            }   
        }
        dp[i] = ans;
    }

    return dp[tar];
}

int main()
{
    cout << "Combination Sum IV" << endl;
}