#include<iostream>
using namespace std;
// min heap code with index start from 0th index
// if parent = ith index;
// leftChild = 2*i+1th
// rightChild = 2*i+2th

/*
void heapify(vector<int> &arr,int n,int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left] < arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] < arr[largest])
    {
        largest = right;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    return arr;
}
*/

int main()
{
    cout << "MIN HEAP" << endl;
    return 0;
}

