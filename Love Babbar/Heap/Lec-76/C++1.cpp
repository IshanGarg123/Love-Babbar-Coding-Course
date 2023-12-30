#include<iostream>
using namespace std;

/*

int getKthLargest(vector<int> &arr, int k)
{
	int n = arr.size();
	priority_queue<int,vector<int>,greater<int>> minheap;

	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = 0;
		for(int j=i;j<n;j++)
		{
			sum = sum + arr[j];
			if(minheap.size() < k)
			{
				minheap.push(sum);
			}
			else
			{
				if(sum > minheap.top())
				{
					minheap.pop();
					minheap.push(sum);
				}
			}
		}
	} 
	return minheap.top();
}
*/

int main()
{
    cout << "Kth Largest Sum SubArray" << endl;
    return 0;
}