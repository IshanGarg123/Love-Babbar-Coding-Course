#include<iostream>
using namespace std;

/*

 int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> maxheap;
        for(int i=0;i<k;i++)
        {
            maxheap.push(arr[i]);
        }
        for(int i=k;i<=r;i++)
        {
            if(maxheap.top()>arr[i])
            {
                maxheap.pop();
                maxheap.push(arr[i]);
            }
        }
        return maxheap.top();
    }

*/

int main()
{
    cout << "kth smallest element in a Heap" << endl;
}