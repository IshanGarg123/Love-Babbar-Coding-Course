// Search in Sorted Rotated Array
#include<iostream>
#include<vector>
using namespace std;


int getPivot(vector<int>& arr, int n)
{
    int s=0;
    int e=n-1;

    while(e>s)
    {
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr,int s,int e,int k)
{
    while(e>=s)
    {
        int mid=(s+e)/2;
        if(arr[mid] == k)
        {
            return mid;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr,n);

    if(arr[pivot]<= k && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);
    }
}



int main()
{
    cout << "Search in a rotated Sorted Array" << endl;
}