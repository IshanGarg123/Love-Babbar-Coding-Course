// Coding Ninjas
// 0 1 Knapsack
// BY Recursion
// T.C. = O(2^N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<vector>

int solve(vector<int>&weight,vector<int>value,int index,int capacity)
{
	if(index == 0)
	{
		if(weight[0]<=capacity)
		{
			return value[0];
		}
		else
		{
			return 0;
		}
	}

	int incl,excl;

	if(weight[index]<=capacity)
	{
		incl = solve(weight,value,index-1,capacity-weight[index]) + value[index];
	}
	excl = solve(weight,value,index-1,capacity);

	return max(incl,excl);
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return solve(weight,value,n-1,maxWeight);
}

int main()
{
    cout << "0 1 Knapsack" << endl;
}
