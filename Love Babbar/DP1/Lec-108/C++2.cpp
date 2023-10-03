// Coding Ninjas
// Count derangements
// BY Recursion + Memorization
// T.C. = O(N) S.C = O(N);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>

#define MOD 1000000007;
#include<vector>
long long solve(int n,vector<int> &dp)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }
    
    dp[n] = (n-1)*(solve(n-1,dp) + solve(n-2,dp))%MOD;
    return dp[n];
}

long long int countDerangements(int n) {
    // Write your code here.
    vector<int> dp(n+1,-1);
    return solve(n,dp);
}

int main()
{
    cout << "Count derangements" << endl;
}
