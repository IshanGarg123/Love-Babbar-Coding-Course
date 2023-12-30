// Book Allocation Problem
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m,int mid)
{
    int StudentCount = 1;
    int noOfPages = 0;

    for(int i=0;i<n;i++)
    {
        if(noOfPages + arr[i] <= mid)
        {
            noOfPages+=arr[i];
        }
        else
        {
            StudentCount++;
            if(StudentCount > m || arr[i]>mid)
            {
                return false;
            }
            noOfPages = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n)
    {
        return -1;
    }
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;

    int ans = -1;

    while(e>=s)
    {
        int mid=(s+e)/2;

        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    cout << "Book Allocation Problem" << endl;
    return 0;
}