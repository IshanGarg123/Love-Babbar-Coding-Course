// Coding Ninjas
// 0 1 Knapsack
// BY Recursion + memorization
// T.C. = O(N^2) S.C = O(N^2);

#include<iostream> 
using namespace std;
#include<vector>

int solve(vector<int>&weight, vector<int>&value, int index, int capacity,vector<vector<int>> &dp)
{
	if(index == 0)
	{
		if(capacity>=weight[0])
		{
			return value[0];
		}	
		else
		{
			return 0;
		}
	}

	if(dp[index][capacity]!=-1)
	{
		return dp[index][capacity];
	}
	
	int incl=0,excl;
	if(capacity>=weight[index])
	{
		incl = solve(weight,value,index-1,capacity-weight[index],dp) + value[index];
	}
	excl = solve(weight,value,index-1,capacity,dp);

	dp[index][capacity] = max(incl,excl);
	return dp[index][capacity];
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
	return solve(weight,value,n-1,maxWeight,dp);
}


int main()
{
    cout << "0 1 Knapsack" << endl;
}