// Coding Ninjas
// 0 1 Knapsack
// BY Space Optimization
// T.C. = O(N^2) S.C = O(N);

#include<iostream> 
using namespace std;
#include<vector>

#include <bits/stdc++.h> 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<int> curr(maxWeight+1,0);
	for(int i=weight[0];i<=maxWeight;i++)
	{
		curr[i] = value[0];
	}

	for(int i=1;i<n;i++)
	{
		for(int j=maxWeight;j>=0;j--)
		{
			int incl=0,excl;
			if(j>=weight[i])
			{
				incl = curr[j-weight[i]] + value[i];
			}
			excl = curr[j];
			curr[j] = max(incl,excl);
		}
	}
	return curr[maxWeight];
}


int main()
{
    cout << "0 1 Knapsack" << endl;
}