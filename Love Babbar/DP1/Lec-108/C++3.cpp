// Coding Ninjas
// Count derangements
// BY Tabulation
// T.C. = O(N) S.C = O(N);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>

#include<vector>
#define MOD 1000000007
long long int countDerangements(int n) {
    // Write your code here.
    vector<long long int> dp(n+1,-1);
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3;i<=n;i++)
    {
        dp[i] = (i-1)*(dp[i-1] + dp[i-2])%MOD;
    }
    
    return dp[n];
}


int main()
{
    cout << "Count derangements" << endl;
}
