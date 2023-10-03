// Coding Ninjas
// Cut Into Segments
// BY Tabulation
// T.C. = O(N) S.C = O(N);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>

int cutSegments(int n, int x, int y, int z) {
	// Write your code here.
	vector<int> dp(n+1,INT_MIN);

	dp[0] = 0;
	
	for(int i=1;i<=n;i++)
	{
		int a=INT_MIN,b=INT_MIN,c=INT_MIN ;
		if(i-x>=0 && dp[i-x]!=INT_MIN)
		{
			a = dp[i-x] + 1;
		}
		if(i-y>=0 && dp[i-y]!=INT_MIN)
		{
			b = dp[i-y] + 1;
		}
		if(i-z>=0 && dp[i-z]!=INT_MIN)
		{
			c = dp[i-z] + 1;
		}

		dp[i] = max(a,max(b,c));
	}

	if(dp[n]<=0)
	{
		return 0;
	}
	return dp[n];
}

int main()
{
    cout << "Cut Into Segments" << endl;
}
