#include<iostream> 
using namespace std;

/*
#include<queue>


int signum(int a,int b)
{
	if(a==b)
	{
		return 0;
	}
	if(a>b)
	{
		return 1;
	}
	else{
		return -1;
	}
}

void calMedian(int element,priority_queue<int> &maxheap,
priority_queue<int,vector<int>,greater<int>> &minheap, int &median)
{
	if(signum(maxheap.size(),minheap.size()) == 0)
	{
		if(element >= median)
		{
			minheap.push(element);
			median = minheap.top();
		}
		else
		{
			maxheap.push(element);
			median = maxheap.top();
		}
	}
	else if(signum(maxheap.size(),minheap.size()) == 1)
	{
		if(element >= median)
		{
			minheap.push(element);
			median = (maxheap.top() + minheap.top()) / 2;
		}
		else
		{
			minheap.push(maxheap.top());
			maxheap.pop();
			maxheap.push(element);
			median = (maxheap.top() + minheap.top()) / 2;
		}

	}
	else
	{
		if(element >= median)
		{
			maxheap.push(minheap.top());
			minheap.pop();
			minheap.push(element);
			median = (maxheap.top() + minheap.top()) / 2;
		}
		else
		{
			maxheap.push(element);
			median = (maxheap.top() + minheap.top()) / 2;
		}

	}



}

vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	int median = -1;
	vector<int> ans;
	priority_queue<int> maxheap;
	priority_queue<int,vector<int>,greater<int>> minheap;

    for (int i = 0; i < n; i++) 
	{
        int element = arr[i];
        calMedian(element, maxheap, minheap, median);
        ans.push_back(median);
    }

	return ans;

}

*/

int main()
{
    cout << "Median in a stream" << endl;
    return 0;
}