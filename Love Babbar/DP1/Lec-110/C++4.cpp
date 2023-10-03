// Coding Ninjas
// 0 1 Knapsack
// BY Space Optimization
// T.C. = O(N^2) S.C = O(N) + O(N);

#include<iostream> 
using namespace std;
#include<vector>

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<int> prev(maxWeight+1,0);
	vector<int> curr(maxWeight+1,0);

	for(int i=weight[0];i<=maxWeight;i++)
	{
			prev[i] = value[0];
	}

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=maxWeight;j++)
		{
			int incl=0;
			if(weight[i]<=j)
			{
				incl = prev[j-weight[i]] + value[i]; 
			}
			int excl = prev[j];

			curr[j] = max(incl,excl);			
		}
		prev = curr;
	}
	return prev[maxWeight];
}

int main()
{
    cout << "0 1 Knapsack" << endl;
}