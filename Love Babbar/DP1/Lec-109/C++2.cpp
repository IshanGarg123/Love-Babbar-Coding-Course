// Coding Ninjas
// Ninja And The Fence
// BY Recursion + memorization
// T.C. = O(N) S.C = O(N) + O(N);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>

#define MOD 1000000007
long long solve(int n,int k,vector<long long> &dp)
{
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k*k;
    }
    
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    dp[n] = (k-1)*(solve(n-1,k,dp) + solve(n-2,k,dp))%MOD;
    return dp[n];
}


int numberOfWays(int n, int k) {
    // Write your code here.
    vector<long long> dp(n+1,-1);
    return solve(n,k,dp);
}




int main()
{
    cout << "Ninja And The Fence" << endl;
}
