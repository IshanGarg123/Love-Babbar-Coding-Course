// Coding Ninjas
// 0 1 Knapsack
// BY Tabulation
// T.C. = O(N^2) S.C = O(N^2);

#include<iostream> 
using namespace std;
#include<vector>
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));

	for(int i=weight[0];i<=maxWeight;i++)
	{
		dp[0][i] = value[0];
	}

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=maxWeight;j++)
		{
			int incl = 0;
			int excl;

			if(weight[i] <= j)
			{
				incl = value[i] + dp[i-1][j-weight[i]];
			}
			excl = dp[i-1][j];
			dp[i][j] = max(incl,excl);
		}
	}
	return dp[n-1][maxWeight];
}

int main()
{
    cout << "0 1 Knapsack" << endl;
}