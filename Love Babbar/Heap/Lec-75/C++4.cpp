#include<iostream>
using namespace std;

/*

long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>> minheap;
        
        long long cost = 0;
        
        for(int i=0;i<n;i++)
        {
            minheap.push(arr[i]);
        }
        
        while(minheap.size()>1)
        {
            long long a = minheap.top();
            minheap.pop();
            long long b = minheap.top();
            minheap.pop();
            
            long long sum = a+b;
            cost = cost + sum;
            minheap.push(sum);
        }
        
        return cost;
    }
*/

int main()
{
    cout << "Minimum Cost of ropes by min heap" << endl;
}