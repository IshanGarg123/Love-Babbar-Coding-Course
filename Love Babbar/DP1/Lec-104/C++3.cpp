// Coding Ninjas
// Minimum Elements
// BY Tabulation (bottom-top)
// T.C. = O(N^2)  S.C = O(N)

#include<iostream> 
using namespace std;
#include<vector>

/*
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    vector<int> dp(x+1,INT_MAX);
    dp[0] = 0;
    
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<num.size();j++)
        {
            if(i-num[j]>=0 && dp[i-num[j]] != INT_MAX)
            {
                dp[i] = min(dp[i],dp[i-num[j]]+1);
            }
        }
    }

    if(dp[x] == INT_MAX)
    {
        return -1;
    }
    return dp[x];

*/

int main()
{
    cout << "Minimum Elements"  << endl;
}