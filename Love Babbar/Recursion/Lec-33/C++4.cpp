#include<iostream>
using namespace std;

int BinarySearch(int arr[],int s,int e,int x)
{
    if(s>e)
    {
        return -1;
    }

    int mid = s+(e-s)/2;
    if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return BinarySearch(arr,s,mid-1,x);
    }
    else
    {
        return BinarySearch(arr,mid+1,e,x);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << BinarySearch(arr,0,8,9) << endl;
    return 0;
}

/*
int BinarySearch(vector<int> &arr,int s,int e,int x)
{
    if(s>e)
    {
        return -1;
    }

    int mid = s+(e-s)/2;
    if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return BinarySearch(arr,s,mid-1,x);
    }
    else
    {
        return BinarySearch(arr,mid+1,e,x);
    }
}


int search(vector<int> &nums, int target) {
    return BinarySearch(nums,0,nums.size()-1,target);
}*/