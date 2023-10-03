// Coding Ninjas
// Ninja And The Fence
// BY Tabulation
// T.C. = O(N) S.C = O(N);

#include<iostream> 
using namespace std;
#include<vector>
#define MOD 1000000007

int numberOfWays(int n, int k) {
    vector<long long> dp(n+1,-1);
    dp[1] = k;
    dp[2] = k*k;

    for(int i=3;i<=n;i++)
    {
        dp[i] = (k-1)*(dp[i-1]+dp[i-2])%MOD;
    }
    return dp[n];
}


int main()
{
    cout << "Ninja And The Fence" << endl;
}
